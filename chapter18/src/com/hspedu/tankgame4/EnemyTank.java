package com.hspedu.tankgame4;

import java.util.Vector;

public class EnemyTank extends Tank {

    Boolean isLive =true;
    Vector<Shot> shots =new Vector<>();
    public EnemyTank(int x, int y) {
        super(x, y);
    }
}
