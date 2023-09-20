package com.hspedu.homework;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.Socket;
import java.net.UnknownHostException;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/19 22:05
 */
public class Client {
    public static void main(String[] args) throws IOException {
        Socket socket = new Socket(InetAddress.getLocalHost(), 999);

        OutputStream outputStream = socket.getOutputStream();
        System.out.println("开始输出");
        outputStream.write("hello server".getBytes());
        //结束输出
        socket.shutdownOutput();

        System.out.println("输出完毕，开始接收");

        InputStream inputStream = socket.getInputStream();
        byte[] buf = new byte[1024];
        int readLen = 0;

        while ((readLen = inputStream.read(buf)) != -1) {
            System.out.println(new String(buf,0,readLen));
        }

        outputStream.close();
        inputStream.close();
        socket.close();
    }
}
