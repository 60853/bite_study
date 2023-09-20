package com.hspedu.api;

import java.io.IOException;
import java.io.InputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.nio.Buffer;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/19 21:25
 */
public class SocketTCP01Server {
    public static void main(String[] args) throws IOException {

        ServerSocket serverSocket = new ServerSocket(999);
        System.out.println("服务器在999端口监听，等待连接~~~");
        Socket socket = serverSocket.accept();
        System.out.println("服务器端：socket" + socket.getClass());
        //通过 socket.getInputStream() 读取客户端数据写到数据通道的数据，显示
        InputStream inputStream = socket.getInputStream();
        // IO 读取
        byte[] buf = new byte[1024];
        int readLen = 0;
        while ((readLen = inputStream.read(buf)) != -1) {
            System.out.println(new String(buf,0,readLen));
        }
        //关闭流
        inputStream.close();
        socket.close();
        serverSocket.close();
    }
}
