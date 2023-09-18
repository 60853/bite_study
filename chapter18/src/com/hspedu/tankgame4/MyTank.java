package com.hspedu.tankgame4;

import java.util.Vector;

public class MyTank extends Tank {

    Shot shot = null;
    //创建shot集合 Vector<Shot>
    Vector<Shot> shots = new Vector<>();

    public MyTank(int x, int y) {
        super(x, y);
    }

    public void shotEnemyTank() {
        if (shots.size() == 5) {
            return;
        }
        //根据不同方向设置不同shot线程
        switch (getDirect()) {
            case 0 ->//向上
                    shot = new Shot(getX() + 20, getY(), 0);
            case 1 ->//向右
                    shot = new Shot(getX() + 60, getY() + 20, 1);
            case 2 ->//向下
                    shot = new Shot(getX() + 20, getY() + 60, 2);
            case 3 ->//向左
                    shot = new Shot(getX(), getY() + 20, 3);
        }
        //把新建的shot对象加入到 shots
        shots.add(shot);
        //启动Shot线程
        new Thread(shot).start();

    }

}
