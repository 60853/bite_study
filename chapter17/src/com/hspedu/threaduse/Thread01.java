package com.hspedu.threaduse;

public class Thread01 {
    public static void main(String[] args) {
        Cat cat = new Cat();
        cat.start();//启动线程
    }
}

// 1. 当一个线程继承了Thread类， 该类就可以当作线程使用
// 2. 我们会重写run方法，写上自己的业务代码
// 3. run Thread 类实现了 Runnable 接口的 run方法
class Cat extends Thread{

    int times=0;
    @Override
    public void run() {

        while (true) {
            System.out.println("喵喵喵~~~我是陈明皓"+(++times));
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            if (times==80){
                break;
            }
//            times++;
        }

    }
}
