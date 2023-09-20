package com.hspedu.homework;

import java.util.Random;
import java.util.Scanner;

/**
 * @author 文涛
 * @version 1.0
 * @date 2023/9/13 15:40
 */
public class Homework01 {
    public static void main(String[] args) {
        T11 t11 = new T11();
        T12 t12 = new T12(t11);

        Thread thread1 = new Thread(t11);
        Thread thread2 = new Thread(t12);
        thread1.start();
        thread2.start();
    }
}

class T11 implements Runnable {
    private Boolean loop = true;

    public Boolean getLoop() {
        return loop;
    }

    public void setLoop(Boolean loop) {
        this.loop = loop;
    }

    @Override
    public void run() {

        while (loop) {
            int ret = (int) (Math.random() * 100 + 1);
            System.out.println(ret);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }
        System.out.println("T11程序已推出~~~");
    }
}

class T12 implements Runnable {
    Scanner scanner = new Scanner(System.in);
    private T11 t11;

    public T12(T11 t11) {
        this.t11 = t11;
    }

    @Override
    public void run() {
        while (true) {
            System.out.println("请输入您的指令(Q)表示退出");
            char key = scanner.next().toUpperCase().charAt(0);
            if (key == 'Q'){
                t11.setLoop(false);
                System.out.println("T12程序已推出~~~");
                break;
            }
        }

    }
}