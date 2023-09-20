package com.hspedu.api;

import java.io.IOException;
import java.io.OutputStream;
import java.net.InetAddress;
import java.net.Socket;
import java.net.UnknownHostException;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/19 21:25
 */
public class SocketTCP01Client {
    public static void main(String[] args) throws IOException {
        //1. 连接服务器 ip 端口
        Socket socket = new Socket(InetAddress.getLocalHost(), 999);
        System.out.println("客户端 socket返回="+socket.getClass());
        //2. 生成Socket 通过 socket.getOutputStream()
        //得到和 socket 对象关联的输出流对象
        OutputStream outputStream = socket.getOutputStream();
        //3. 通过输出流。写入数据到 数据通道
        outputStream.write("陈明皓".getBytes());
        //4. 关闭流对象和socket
        outputStream.close();
        socket.close();
        System.out.println("客户端退出了~~~");
    }
}
