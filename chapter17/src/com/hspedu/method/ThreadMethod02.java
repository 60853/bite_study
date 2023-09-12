package com.hspedu.method;

public class ThreadMethod02 {
    public static void main(String[] args) throws InterruptedException {
        TT tt = new TT();
        tt.setName("陈明皓");
        tt.setPriority(Thread.MIN_PRIORITY);
        //如果我们希望主线程结束后，子线程自动结束
        //只需将子线程设置为守护线程即可
//        tt.setDaemon(true);
        tt.start();

        for (int i = 1; i <100; i++) {
            System.out.println("张力阳吃了"+i+"个包子~~~");
            Thread.sleep(1000);
            if (i == 20){
                System.out.println("张力阳吃撑了，让陈明皓先吃~~~");
                tt.join();
//                Thread.yield();//线程礼让，资源充足时不一定成功
                System.out.println("张力阳开始继续吃~~~");
            }
        }
    }
}
class TT extends Thread{


    @Override
    public void run() {
        for (int i = 1; i <30; i++) {
            System.out.println(TT.currentThread().getName()+"吃了"+i+"个包子~~~");
            try {
                sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
        System.out.println("陈明皓吃饱了让张力阳继续吃~~~");
    }
}