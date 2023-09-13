package com.hspedu.tankgame4;

public class MyTank extends Tank {

    Shot shot = null;

    public MyTank(int x, int y) {
        super(x, y);
    }

    public void shotEnemyTank() {

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
        //启动Shot线程
        new Thread(shot).start();

    }

}
