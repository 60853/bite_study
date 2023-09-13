package com.hspedu.tankgame4;

public class Tank {
    private int x;  //坦克横坐标
    private int y;  //坦克纵坐标
    private int direct; //坦克方向 0上 1右 2下 3左

    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }

    private int speed = 1;

    public Tank(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public void move_Up() {
        y -= speed;
    }

    public void move_Right() {
        x += speed;
    }

    public void move_Down() {
        y += speed;
    }

    public void move_Left() {
        x -= speed;
    }

    public int getDirect() {
        return direct;
    }

    public void setDirect(int direct) {
        this.direct = direct;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}
