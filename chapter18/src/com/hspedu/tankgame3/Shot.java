package com.hspedu.tankgame3;

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
                case 0://上
                    y -= speed;
                    break;
                case 1://右
                    x += speed;
                    break;
                case 2://下
                    y += speed;
                    break;
                case 3://左
                    x -= speed;
                    break;
            }
            System.out.println("x=" + x + " y=" + y);

            //子弹超出边界
            if (!(x >= 0 && x <= 1000 && y >= 0 && y <= 750)) {
                isLive = false;
                break;
            }
        }

    }
}
