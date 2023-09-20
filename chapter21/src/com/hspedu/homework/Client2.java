package com.hspedu.homework;

import java.io.*;
import java.net.InetAddress;
import java.net.Socket;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/19 22:05
 */
public class Client2 {
    public static void main(String[] args) throws IOException {
        Socket socket = new Socket(InetAddress.getLocalHost(), 999);

        OutputStream outputStream = socket.getOutputStream();
        System.out.println("开始输出");

        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(outputStream));
        bufferedWriter.write("陈明皓是个小黑子~~~");
        bufferedWriter.newLine();
        bufferedWriter.flush();
        //结束输出


        System.out.println("输出完毕，开始接收");

        InputStream inputStream = socket.getInputStream();

        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(inputStream));
        String s = bufferedReader.readLine();
        System.out.println(s);

        bufferedReader.close();
        bufferedWriter.close();
        socket.close();
    }
}
