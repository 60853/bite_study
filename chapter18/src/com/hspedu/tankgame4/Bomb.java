package com.hspedu.tankgame4;

/**
 * @author 文涛
 * @version 1.0
 * @date 2023/9/16 15:12
 * <p>
 * 炸弹
 */
public class Bomb {
    int x, y;   //炸弹的坐标
    int life = 9;   //炸弹的生命周期
    boolean isLive = true;  //炸弹是否还存活

    public Bomb(int x, int y) {
        this.x = x;
        this.y = y;
    }

    //减少生命值
    public void lifeDown() {
        if (life>0){
            life--;
        }else {
            isLive=false;
        }
    }
}
