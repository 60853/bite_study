package com.hspedu.api;

import java.net.InetAddress;
import java.net.UnknownHostException;

/**
 * @author 文涛
 * @version 1.0
 * @date 2023/9/19 8:57
 * 演示 InetAddress 类的使用
 */
public class Api_ {
    public static void main(String[] args) throws UnknownHostException {

        //1. 获取本机的 InetAddress 对象
        InetAddress localHost = InetAddress.getLocalHost();
        System.out.println(localHost);  //LAPTOP-B3LM4F8C/192.168.31.243

        //2. 根据主机名 获取 InetAddress 对象
        InetAddress byName = InetAddress.getByName("LAPTOP-B3LM4F8C");
        System.out.println(byName);     //LAPTOP-B3LM4F8C/192.168.31.243

        //3. 根据域名返回 InetAddress 对象，比如 www.baidu.com
        InetAddress byName1 = InetAddress.getByName("www.baidu.com");
        System.out.println(byName1);    //www.baidu.com/14.119.104.254

        //通过 InetAddress 对象，获取对应的地址/域名
        String hostAddress = byName1.getHostAddress();
        String hostName = byName1.getHostName();
        System.out.println(hostName+" "+hostAddress);
    }
}
