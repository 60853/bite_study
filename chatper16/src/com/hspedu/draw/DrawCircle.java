package com.hspedu.draw;

import javax.swing.*;
import java.awt.*;

public class DrawCircle extends JFrame{ //JFrame 对应窗口，可以理解为一个画框

    //定义一个面板
    public MyPanel mp = null;
//    public MyPanel mp;
    public static void main(String[] args) {
        new DrawCircle();

    }
    public DrawCircle() {   //构造器
        //初始化面板
        mp =new MyPanel();
        //把面板放入画框中
        this.add(mp);
        //设置窗口大小
        this.setSize(500,400);
        //当点击窗口红叉退出程序
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);//可以显示
    }
}

class MyPanel extends JPanel {
    //MyPanel   对象为一个画板
    //Graphics g    对象为一只画笔
    @Override
    public void paint(Graphics g) {     //绘图方法
        super.paint(g); //调用父类方法完成初始化
        //画一个圆
        //g.drawOval(10,10,100,100);
        //画一个直线
        //g.drawLine(10,10,100,100);
        //画一个矩形边框
        //g.drawRect(10,10,100,100);

        //设置画笔颜色
        //g.setColor(Color.blue);
        //填充矩形
        //g.fillRect(10,10,100,100);
        //填充椭圆
        //g.setColor(Color.red);
        //g.fillOval(10,10,100,100);
        //获取图片资源
        Image image = Toolkit.getDefaultToolkit().getImage(MyPanel.class.getResource("/01.png"));
        g.drawImage(image,10,10,175,221,this);
        //画字符
//        g.setColor(Color.blue);
//        g.setFont(new Font("宋体",Font.BOLD,50));
//        //左下角
//        g.drawString("陈明皓是个小黑子",100,100);
    }
}