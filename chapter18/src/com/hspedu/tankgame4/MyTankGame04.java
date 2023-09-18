package com.hspedu.tankgame4;

import javax.swing.*;

public class MyTankGame04 extends JFrame {//窗口

    //定义MyPanel
    MyPanel mp;

    public static void main(String[] args) {

    MyTankGame04 myTankGame01 =new MyTankGame04();
    }
    public MyTankGame04(){
        mp=new MyPanel();
        //将 mp 放入到Thread, 并启动
        Thread thread = new Thread(mp);
        thread.start();
        this.add(mp);//把面板(就是游戏的绘图区)
        this.setSize(1200,1000);
        this.addKeyListener(mp);
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setVisible(true);

    }
}


