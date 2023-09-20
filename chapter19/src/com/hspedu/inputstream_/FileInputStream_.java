package com.hspedu.inputstream_;

import org.junit.jupiter.api.Test;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

/**
 * @author 文涛
 * @version 1.0
 * @date 2023/9/18 9:06
 * 样式 FileInputStream 的使用（字节输入流）
 */
public class FileInputStream_ {
    public static void main(String[] args) {

    }

    @Test
    public void readFile01_() {
        String filePath = "D:\\IDEA\\IDEAXM\\study\\chapter19\\src\\com\\hspedu\\file\\minghao.txt";
        int readData = 0;
        FileInputStream fileInputStream = null;
        try {
            fileInputStream = new FileInputStream(filePath);
            while ((readData = fileInputStream.read()) != -1) {
                System.out.print((char) readData);
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        } finally {
            //关闭字节流
            try {
                fileInputStream.close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }

    /**
     * 演示读取文件
     * 使用read(byte[] b) 读取文件提高效率
     */
    @Test
    public void readFile02_() {
        String filePath = "D:\\IDEA\\IDEAXM\\study\\chapter19\\src\\com\\hspedu\\file\\minghao.txt";
        int readData = 0;
        byte[] bytes = new byte[8];
        int readLen=0;
        FileInputStream fileInputStream = null;
        try {
            fileInputStream = new FileInputStream(filePath);
            //读到-1 结束
            while ((readLen= fileInputStream.read(bytes)) != -1) {
                System.out.print(new String(bytes,0,readLen));
            }
        } catch (IOException e) {
            throw new RuntimeException(e);
        } finally {
            //关闭字节流
            try {
                fileInputStream.close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
