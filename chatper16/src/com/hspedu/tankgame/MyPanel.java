package com.hspedu.tankgame;

import javax.swing.*;
import java.awt.*;

public class MyPanel extends JPanel {//画板
    //定义自己的坦克
    MyTank myTank = null;
    public MyPanel(){
        myTank =new MyTank(100,100);//初始化我的坦克
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g);
        g.fillRect(0,0,1000,750);

        //画出坦克-封装方法
        drawTank(myTank.getX(), myTank.getX(), g,0,0);
    }

    /**
     *
     * @param x 坦克左上角的x坐标
     * @param y 坦克左上角的y坐标
     * @param g 画笔
     * @param direct 坦克方向(上下左右)
     * @param type 坦克类型
     */
    public void drawTank(int x,int y,Graphics g,int direct,int type){

        //根据不同类型的坦克，设置不同的颜色
        switch (type){
            case 0: //我们的坦克
                g.setColor(Color.cyan);
                break;
            case 1: //敌人的坦克
                g.setColor(Color.yellow);
                break;
        }

        //根据坦克方向，来绘制坦克
        switch (direct){
            case 0: //向上
                g.fill3DRect(x,y,10,60,false);//画出坦克左边轮子
                g.fill3DRect(x+30,y,10,60,false);//画出坦克右边轮子
                g.fill3DRect(x+10,y+10,20,40,false);//画出坦克盖子
                g.fillOval(x+10,y+20,20,20);//画出坦克圆形盖子
                g.drawLine(x+20,y+30,x+20,y);//画出炮筒

                break;
            default:
                System.out.println("暂时未处理");

        }
    }
}
