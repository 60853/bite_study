package com.hspedu.tankgame3;

import javax.swing.*;

public class MyTankGame03 extends JFrame {//窗口

    //定义MyPanel
    MyPanel mp;

    public static void main(String[] args) {

    MyTankGame03 myTankGame01 =new MyTankGame03();
    }
    public MyTankGame03(){
        mp=new MyPanel();
        //将 mp 放入到Thread, 并启动
        Thread thread = new Thread(mp);
        thread.start();
        this.add(mp);//把面板(就是游戏的绘图区)
        this.setSize(1000,750);
        this.addKeyListener(mp);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);

    }
}


