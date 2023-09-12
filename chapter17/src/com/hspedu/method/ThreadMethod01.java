package com.hspedu.method;

public class ThreadMethod01 {
    public static void main(String[] args) throws InterruptedException {

        T t = new T();//创建线程
        t.setName("陈明皓");//设置线程名称
        t.setPriority(Thread.MIN_PRIORITY);//设置线程优先级
        t.start();//启动子线程

        //主线程打印 10次hi 中断休眠
        for (int i = 0; i < 5; i++) {
            Thread.sleep(1000);
            System.out.println("hi "+i);
        }
        t.interrupt();//当执行到这句话时，打断 t线程的休眠
    }
}

class T extends Thread {

    @Override
    public void run() {
        while (true) {
            for (int i = 0; i < 100; i++) {
                System.out.println(Thread.currentThread().getName() + " 吃包子中~~~" + i);
            }
            try {
                System.out.println("休眠中~~~");
                Thread.sleep(20000);//休眠20秒
            } catch (InterruptedException e) {
                System.out.println(Thread.currentThread().getName() + "的休眠被中断了~~~");
            }
        }
    }
}