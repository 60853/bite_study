package com.hspedu.upload;

import java.io.*;
import java.net.InetAddress;
import java.net.Socket;


/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/20 22:33
 * 文件下载客户端
 */
public class TCPFileUploadClient {
    public static void main(String[] args) throws IOException {
        //1. 创建 Socket 对象 socket 完成连接
        Socket socket = new Socket(InetAddress.getLocalHost(),8888);
        //2. 创建读取磁盘文件的输入流
        String filepath="D:\\xiazai\\素材\\yjtp.ico";
        BufferedInputStream bis = new BufferedInputStream(new FileInputStream(filepath));

        //这里 bytes 就是 filepath对应文件的字节数组
        byte[] bytes = StreamUtils.streamToByteArray(bis);


        //3. 通过socket获取到输出流，将bytes数据发送给服务端
        BufferedOutputStream bos = new BufferedOutputStream(socket.getOutputStream());
        bos.write(bytes);//将filepath 对应文件的字节数组的内容，写入到数据通道

        socket.shutdownOutput();//设置结束标志

        //4. 关闭相关流
        bos.close();
        bis.close();
        socket.close();
    }
}
