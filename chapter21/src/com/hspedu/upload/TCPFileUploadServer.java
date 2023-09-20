package com.hspedu.upload;

import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/20 22:32
 * 文件上传服务端
 */
public class TCPFileUploadServer {
    public static void main(String[] args) throws IOException {
        //1. 服务端在本机监听8888端口
        ServerSocket serverSocket = new ServerSocket(8888);
        System.out.println("服务端在端口8888监听，等待连接~~~");
        //2. 等待连接
        // 创建 Socket 对象 accept
        Socket accept = serverSocket.accept();


        //3. 读取客户端发送的数据
        BufferedInputStream bis = new BufferedInputStream(accept.getInputStream());
        byte[] bytes = StreamUtils.streamToByteArray(bis);

        //4. 将得到的 bytes 数组，写入到指定的路径，就得到一个文件了
        String destFilePath ="D:\\xiazai\\素材\\01.ico";
        BufferedOutputStream bos = new BufferedOutputStream(new FileOutputStream(destFilePath));
        bos.write(bytes);


        //5. 关闭相关流、
        bos.close();
        bis.close();

        serverSocket.close();
        accept.close();
    }
}
