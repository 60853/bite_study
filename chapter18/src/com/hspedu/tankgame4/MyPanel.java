package com.hspedu.tankgame4;

import javax.swing.*;
import java.awt.*;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.Vector;

//为了实现监听键盘事件，实现 KeyListener
//为了实现射出子弹不断重绘，要实现 Runnable ，当作一个线程使用
public class MyPanel extends JPanel implements KeyListener, Runnable {//画板
    //定义自己的坦克
    MyTank myTank;
    //定义敌人坦克数组
    Vector<EnemyTank> enemyTanks = new Vector<>();
    int enemyTankSize = 3;

    public MyPanel() {
        //初始化我的坦克
        myTank = new MyTank(100, 100);
        myTank.setSpeed(5);
        //初始化敌人坦克
        for (int i = 0; i < enemyTankSize; i++) {
            //创建敌方坦克
            EnemyTank enemyTank = new EnemyTank((100 * (i + 1)), 0);
            //设置方向
            enemyTank.setDirect(2);
            //给该enemyTank 加入一颗子弹
            Shot shot = new Shot(enemyTank.getX() + 20, enemyTank.getY() + 60, enemyTank.getDirect());
            //加入enemyTank的Vector 成员
            enemyTank.shots.add(shot);
            //启动 shot对象
            new Thread(shot).start();
            enemyTanks.add(enemyTank);
        }
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.fillRect(0, 0, 1000, 750);

        //画出坦克-封装方法
        drawTank(myTank.getX(), myTank.getY(), g, myTank.getDirect(), 1);

        //画出MyTank射击的子弹
        if (myTank.shot != null && myTank.shot.isLive) {
            g.draw3DRect(myTank.shot.x, myTank.shot.y, 2, 2, false);
        }

        //画出敌人的坦克,遍历Vector
        for (EnemyTank enemyTank : enemyTanks) {
            if (enemyTank.isLive) {
                drawTank(enemyTank.getX(), enemyTank.getY(), g, enemyTank.getDirect(), 0);
            }
            //画出敌方坦克的子弹
            for (int j = 0; j < enemyTank.shots.size(); j++) {
                //取出子弹
                Shot shot = enemyTank.shots.get(j);
                //绘制
                if (shot.isLive) {
                    g.draw3DRect(shot.x, shot.y, 2, 2, false);
                } else {
                    enemyTank.shots.remove(shot);
                }
            }
        }

    }

    /**
     * @param x      坦克左上角的x坐标
     * @param y      坦克左上角的y坐标
     * @param g      画笔
     * @param direct 坦克方向(上下左右)
     * @param type   坦克类型
     */
    public void drawTank(int x, int y, Graphics g, int direct, int type) {

        //根据不同类型的坦克，设置不同的颜色
        switch (type) {
            case 0 -> //我们的坦克
                    g.setColor(Color.cyan);
            case 1 -> //敌人的坦克
                    g.setColor(Color.yellow);
        }

        //根据坦克方向，来绘制坦克
        switch (direct) {
            case 0 -> { //向上
                g.fill3DRect(x, y, 10, 60, false);//画出坦克左边轮子
                g.fill3DRect(x + 30, y, 10, 60, false);//画出坦克右边轮子
                g.fill3DRect(x + 10, y + 10, 20, 40, false);//画出坦克盖子
                g.fillOval(x + 10, y + 20, 20, 20);//画出坦克圆形盖子
                g.drawLine(x + 20, y + 30, x + 20, y);//画出炮筒
            }
            case 1 -> { //向右
                g.fill3DRect(x, y, 60, 10, false);//画出坦克上边轮子
                g.fill3DRect(x, y + 30, 60, 10, false);//画出坦克下边轮子
                g.fill3DRect(x + 10, y + 10, 40, 20, false);//画出坦克盖子
                g.fillOval(x + 20, y + 10, 20, 20);//画出坦克圆形盖子
                g.drawLine(x + 30, y + 20, x + 60, y + 20);//画出炮筒
            }
            case 2 -> { //向下
                g.fill3DRect(x, y, 10, 60, false);//画出坦克左边轮子
                g.fill3DRect(x + 30, y, 10, 60, false);//画出坦克右边轮子
                g.fill3DRect(x + 10, y + 10, 20, 40, false);//画出坦克盖子
                g.fillOval(x + 10, y + 20, 20, 20);//画出坦克圆形盖子
                g.drawLine(x + 20, y + 30, x + 20, y + 60);//画出炮筒
            }
            case 3 -> { //向左
                g.fill3DRect(x, y, 60, 10, false);//画出坦克上边轮子
                g.fill3DRect(x, y + 30, 60, 10, false);//画出坦克下边轮子
                g.fill3DRect(x + 10, y + 10, 40, 20, false);//画出坦克盖子
                g.fillOval(x + 20, y + 10, 20, 20);//画出坦克圆形盖子
                g.drawLine(x + 30, y + 20, x, y + 20);//画出炮筒
            }
            default -> System.out.println("暂时未处理");
        }
    }

    //编写方法，判断我方子弹是否击中敌方坦克
    public void hitTank(Shot s, EnemyTank enemyTank) {
        switch (enemyTank.getDirect()) {

            case 0://当敌方坦克朝上
            case 2://当敌方坦克朝下
                if (s.x > enemyTank.getX() && s.x < enemyTank.getX() + 40
                        && s.y > enemyTank.getY() && s.y < enemyTank.getY() + 60) {
                    s.isLive = false;
                    enemyTank.isLive = false;
                }
            case 1://当敌方坦克朝右
            case 3://当敌方坦克朝左
                if (s.x > enemyTank.getX() && s.x < enemyTank.getX() + 60
                        && s.y > enemyTank.getY() && s.y < enemyTank.getY() + 40) {
                    s.isLive = false;
                    enemyTank.isLive = false;
                }
        }


    }

    @Override
    public void keyTyped(KeyEvent e) {

    }

    //处理上下左右按键事件
    @Override
    public void keyPressed(KeyEvent e) {
        if (e.getKeyCode() == KeyEvent.VK_UP) {//向上
            myTank.setDirect(0);
            myTank.move_Up();
//            myTank.setY(myTank.getY()-1);
        } else if (e.getKeyCode() == KeyEvent.VK_RIGHT) {//向右
            myTank.setDirect(1);
            myTank.move_Right();
        } else if (e.getKeyCode() == KeyEvent.VK_DOWN) {//向下
            myTank.setDirect(2);
            myTank.move_Down();
        } else if (e.getKeyCode() == KeyEvent.VK_LEFT) {//向左
            myTank.setDirect(3);
            myTank.move_Left();
        }
        if (e.getKeyCode() == KeyEvent.VK_J) {
            myTank.shotEnemyTank();
        }
        this.repaint();
    }

    @Override
    public void keyReleased(KeyEvent e) {

    }

    @Override
    public void run() {
        while (true) {
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            if (myTank.shot != null && myTank.shot.isLive) {
                for (EnemyTank enemyTank : enemyTanks) {

                    hitTank(myTank.shot, enemyTank);
                }
            }
            this.repaint();
        }
    }
}
