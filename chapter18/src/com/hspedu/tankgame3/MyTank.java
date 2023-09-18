package com.hspedu.tankgame3;

public class MyTank extends Tank {

    Shot shot = null;

    public MyTank(int x, int y) {
        super(x, y);
    }

    public void shotEnemyTank() {

        //根据不同方向设置不同shot线程
        switch (getDirect()) {
            case 0://向上
                shot = new Shot(getX() + 20, getY(), 0);
                break;
            case 1://向右
                shot = new Shot(getX() + 60, getY() + 20, 1);
                break;
            case 2://向下
                shot = new Shot(getX() + 20, getY() + 60, 2);
                break;
            case 3://向左
                shot = new Shot(getX(), getY() + 20, 3);
                break;
        }
        //启动Shot线程
        new Thread(shot).start();
    }

}