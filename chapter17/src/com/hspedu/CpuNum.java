package com.hspedu;

public class CpuNum {
    public static void main(String[] args) {

        Runtime runtime = Runtime.getRuntime();
        //获取cpu个数
        int cpuNums = runtime.availableProcessors();
        System.out.println("当前可用CPU 个数=" + cpuNums);
    }
}
