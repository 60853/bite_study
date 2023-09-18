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
    //定义一个 Vector，用于存放bomb
    Vector<Bomb> bombs = new Vector<>();

    int enemyTankSize = 3;

    //定义三张图片
    Image image1 = null;
    Image image2 = null;
    Image image3 = null;

    public MyPanel() {
        //初始化我的坦克
        myTank = new MyTank(500, 600);
        myTank.setSpeed(5);
        //初始化敌人坦克
        for (int i = 0; i < enemyTankSize; i++) {
            //创建敌方坦克
            EnemyTank enemyTank = new EnemyTank((100 * (i + 1)), 0);
            //设置方向
            enemyTank.setDirect(2);
            //启动敌人坦克线程，让其动起来
            new Thread(enemyTank).start();
            //给该enemyTank 加入一颗子弹
            Shot shot = new Shot(enemyTank.getX() + 20, enemyTank.getY() + 60, enemyTank.getDirect());
            //加入enemyTank的Vector 成员
            enemyTank.shots.add(shot);
            //启动 shot对象
            new Thread(shot).start();
            enemyTanks.add(enemyTank);
        }
        //初始化图片对象
        image1 = Toolkit.getDefaultToolkit().getImage(MyPanel.class.getResource("/bomb_01.gif"));
        image2 = Toolkit.getDefaultToolkit().getImage(MyPanel.class.getResource("/bomb_02.gif"));
        image3 = Toolkit.getDefaultToolkit().getImage(MyPanel.class.getResource("/bomb_03.gif"));
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.fillRect(0, 0, 1000, 750);
        if (myTank != null && myTank.isLive) {
            //画出坦克-封装方法
            drawTank(myTank.getX(), myTank.getY(), g, myTank.getDirect(), 1);
        }
        //画出MyTank射击的子弹
//        if (myTank.shot != null && myTank.shot.isLive) {
//            g.draw3DRect(myTank.shot.x, myTank.shot.y, 2, 2, false);
//        }
        //将MyTank射击子弹集合 shots,遍历绘制
        for (int i = 0; i < myTank.shots.size(); i++) {
            Shot shot = myTank.shots.get(i);
            if (shot != null && shot.isLive) {
                g.draw3DRect(shot.x, shot.y, 2, 2, false);
            } else {//如果该shot对象销毁了，就移除该shot
                myTank.shots.remove(shot);
            }
        }

        //如果bombs 集合中有对象，就画出
        for (int i = 0; i < bombs.size(); i++) {
            Bomb bomb = bombs.get(i);
            if (bomb.life > 6) {
                g.drawImage(image1, bomb.x, bomb.y, 60, 60, this);
            } else if (bomb.life > 3) {
                g.drawImage(image2, bomb.x, bomb.y, 60, 60, this);
            } else {
                g.drawImage(image3, bomb.x, bomb.y, 60, 60, this);
            }
            //让炸弹生命值减少
            bomb.lifeDown();
            if (bomb.life == 0) {
                bombs.remove(bomb);
            }
        }

        //画出敌人的坦克,遍历Vector
        for (EnemyTank enemyTank : enemyTanks) {
            if (enemyTank.isLive) {
                drawTank(enemyTank.getX(), enemyTank.getY(), g, enemyTank.getDirect(), 0);
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

    //如果我们的坦克可以发射多颗子弹
    //在判断我们的子弹是否命中敌方坦克时就要遍历我们的子弹集合
    public void hitEnemyTank() {
        //遍历我方子弹
        for (int j = 0; j < myTank.shots.size(); j++) {
            Shot shot = myTank.shots.get(j);

            if (shot != null && shot.isLive) {
                for (int i = 0; i < enemyTanks.size(); i++) {
                    EnemyTank enemyTank = enemyTanks.get(i);
                    hitTank(shot, enemyTank);
                }
            }
        }
    }

    //判断敌方坦克是否击中我方坦克
    public void hitMyTank() {
        //遍历敌方所有坦克
        for (int i = 0; i < enemyTanks.size(); i++) {
            EnemyTank enemyTank = enemyTanks.get(i);
            //遍历 enemyTank 对象的所有子弹
            for (int j = 0; j < enemyTank.shots.size(); j++) {
                //取出子弹
                Shot shot = enemyTank.shots.get(j);
                //判断 shot 是否击中我们坦克
                if (myTank.isLive && shot.isLive) {
                    hitTank(shot, myTank);
                }
            }
        }
    }

    //编写方法，判断我方子弹是否击中坦克
    public void hitTank(Shot s, Tank Tank) {
        switch (Tank.getDirect()) {

            case 0://当敌方坦克朝上
            case 2://当敌方坦克朝下
                if (s.x > Tank.getX() && s.x < Tank.getX() + 40
                        && s.y > Tank.getY() && s.y < Tank.getY() + 60) {
                    s.isLive = false;
                    Tank.isLive = false;
                    enemyTanks.remove(Tank);
                    //创建Bomb对象，加入到bombs集合中
                    Bomb bomb = new Bomb(Tank.getX(), Tank.getY());
                    bombs.add(bomb);
                }
            case 1://当敌方坦克朝右
            case 3://当敌方坦克朝左
                if (s.x > Tank.getX() && s.x < Tank.getX() + 60
                        && s.y > Tank.getY() && s.y < Tank.getY() + 40) {
                    s.isLive = false;
                    Tank.isLive = false;
                    //创建Bomb对象，加入到bombs集合中
                    Bomb bomb = new Bomb(Tank.getX(), Tank.getY());
                    bombs.add(bomb);
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
            if (myTank.getY() > 0) {
                myTank.move_Up();
            }
//            myTank.setY(myTank.getY()-1);
        } else if (e.getKeyCode() == KeyEvent.VK_RIGHT) {//向右
            myTank.setDirect(1);
            if (myTank.getX() + 60 < 1000) {
                myTank.move_Right();
            }
        } else if (e.getKeyCode() == KeyEvent.VK_DOWN) {//向下
            myTank.setDirect(2);
            if (myTank.getY() + 60 < 750)
                myTank.move_Down();
        } else if (e.getKeyCode() == KeyEvent.VK_LEFT) {//向左
            myTank.setDirect(3);
            if (myTank.getX() > 0)
                myTank.move_Left();
        }
        if (e.getKeyCode() == KeyEvent.VK_J) {
//            if (myTank.shot == null || myTank.shot.isLive) {
//
//            }
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
            //判断是否击中我们坦克
            hitMyTank();
            //判断是否击中敌方坦克
            hitEnemyTank();
            this.repaint();
        }
    }
}
