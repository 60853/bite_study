package com.hspedu.tankgame2;

import javax.swing.*;

public class MyTankGame02 extends JFrame {//窗口

    //定义MyPanel
    MyPanel mp;
    public static void main(String[] args) {

    MyTankGame02 myTankGame01 =new MyTankGame02();

    }
    public MyTankGame02(){
        mp=new MyPanel();
        this.add(mp);//把面板(就是游戏的绘图区)
        this.setSize(1000,750);
        this.addKeyListener(mp);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);

    }
}
