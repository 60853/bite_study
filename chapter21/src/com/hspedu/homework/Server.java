package com.hspedu.homework;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/19 21:55
 */
public class Server {
    public static void main(String[] args) throws IOException {
        ServerSocket serverSocket = new ServerSocket(999);
        System.out.println("等待连接");
        Socket socket = serverSocket.accept();
        System.out.println("连接成功，开始接收");
        InputStream inputStream = socket.getInputStream();
        byte[] buf = new byte[1024];
        int readLen =0;

        while ((readLen= inputStream.read(buf))!=-1){
            System.out.println(new String(buf,0,readLen));
        }


        System.out.println("接收完毕，开始输出");
        OutputStream outputStream = socket.getOutputStream();
        outputStream.write("hello client".getBytes());
        socket.shutdownOutput();

        outputStream.close();
        inputStream.close();
        socket.close();
        serverSocket.close();
    }
}
