package com.hspedu.tankgame4;

/**
 * @author 文涛
 * @version 1.0
 * @date 2023/9/13 16:53
 */
public class Shot implements Runnable {

    int x;  //子弹x坐标
    int y;  //子弹y坐标
    int direct = 0; //子弹方向
    int speed = 2;  //子弹速度
    Boolean isLive = true;  //子弹是否还存活

    public Boolean getLive() {
        return isLive;
    }

    public void setLive(Boolean live) {
        isLive = live;
    }

    public int getDirect() {
        return direct;
    }

    public void setDirect(int direct) {
        this.direct = direct;
    }

    public int getSpeed() {
        return speed;
    }

    public void setSpeed(int speed) {
        this.speed = speed;
    }

    public Shot(int x, int y, int direct) {
        this.x = x;
        this.y = y;
        this.direct = direct;
    }

    @Override
    public void run() {

        while (true) {
            try {
                Thread.sleep(50);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            switch (direct) {
                case 0 ->//上
                        y -= speed;
                case 1 ->//右
                        x += speed;
                case 2 ->//下
                        y += speed;
                case 3 ->//左
                        x -= speed;
            }
            System.out.println("子弹：x=" + x + " y=" + y);

            //子弹超出边界
            if (!(x >= 0 && x <= 1000 && y >= 0 && y <= 750 && isLive)) {
                isLive = false;
                break;
            }
        }
        System.out.println("子弹线程已退出~~~");
    }
}
