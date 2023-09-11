package com.hspedu.tankgame;

import javax.swing.*;

public class MyTankGame01 extends JFrame {//窗口

    //定义MyPanel
    MyPanel mp = null;
    public static void main(String[] args) {

    MyTankGame01 myTankGame01 =new MyTankGame01();

    }
    public MyTankGame01(){
        mp=new MyPanel();
        this.add(mp);//把面板(就是游戏的绘图区)
        this.setSize(1000,750);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);

    }
}
