package com.hspedu.threaduse;

public class Thread02 {
    public static void main(String[] args) {
        Dog dog = new Dog();
        Thread thread = new Thread(dog);
        thread.start();
    }
}

class Dog implements Runnable{//实现 Runnable 接口完成线程的创建

    @Override
    public void run() {
        while (true) {
            System.out.println("陈明皓");
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
    }
}