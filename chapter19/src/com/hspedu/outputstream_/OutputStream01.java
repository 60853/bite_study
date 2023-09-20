package com.hspedu.outputstream_;

import org.junit.jupiter.api.Test;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

/**
 * @author 文涛
 * @version 1.0
 * @date 2023/9/18 9:35
 */
public class OutputStream01 {
    public static void main(String[] args) {

    }
    @Test
    public void writeFile01_() {
        String filePath = "D:\\IDEA\\IDEAXM\\study\\chapter19\\src\\com\\hspedu\\file\\minghao02.txt";

        FileOutputStream fileOutputStream =null;

        try {
//            fileOutputStream = new FileOutputStream(filePath);
            fileOutputStream = new FileOutputStream(filePath,true);
            String str="陈明皓是个小黑子~~~";
//            fileOutputStream.write('a');
            fileOutputStream.write(str.getBytes());
        } catch (IOException e) {
            throw new RuntimeException(e);
        } finally {
            //关闭字节流
            try {
                fileOutputStream.close();
            } catch (IOException e) {
                throw new RuntimeException(e);
            }
        }
    }
}
