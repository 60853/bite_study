package com.hspedu.threaduse;

public class Thread03 {
    public static void main(String[] args) {
        T1 t1 = new T1();
        T2 t2 = new T2();
        Thread thread1 = new Thread(t1);
        Thread thread2 = new Thread(t2);
        thread1.start();//启动第一个线程
        thread2.start();//启动第二个线程
    }
}

class T1 implements Runnable{
    int times=0;
    @Override
    public void run() {
        while (true) {//每隔一秒输出 hello world
            System.out.println("hello world "+(++times));
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            if (times == 10){
                break;
            }
        }
    }
}

class T2 implements Runnable{
    int times=0;
    @Override
    public void run() {
        while (true) {//每隔一秒输出 hello world
            System.out.println("hi "+(++times));
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
            if (times == 5){
                break;
            }
        }
    }
}