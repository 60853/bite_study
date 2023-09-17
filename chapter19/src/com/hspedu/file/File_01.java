package com.hspedu.file;



import org.junit.jupiter.api.Test;

import java.io.File;
import java.io.IOException;

/**
 * @author 文涛
 * @version 1.0
 * @date 2023/9/17 13:28
 */
public class File_01 {
    public static void main(String[] args) {

    }
    @Test
    //文件创建方法1 文件地址创建
    public void creatFile_01(){
        String filePath="D:\\IDEA\\IDEAXM\\study\\chapter19\\src\\com\\hspedu\\file\\minghao.txt";
        File file = new File(filePath);
        try {
            file.createNewFile();
            System.out.println("文件创建成功~~~");
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }
    @Test
    //文件创建方法2 父目录文件 + 子路径构建
    public void creatFile_02(){
        File file =new File("D:\\IDEA\\IDEAXM\\study\\chapter19\\src\\com\\hspedu\\file");
        File file1 = new File(file, "minghao02.txt");
        try {
            file1.createNewFile();
            System.out.println("文件创建成功~~~");
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

    }
    @Test
    //文件创建方法3 父目录 + 子路径构建
    public void creatFile_03(){
        String parent="D:\\IDEA\\IDEAXM\\study\\chapter19\\src\\com\\hspedu\\file\\";
        String p="minghao03.txt";
        File file = new File(parent, p);
        try {
            file.createNewFile();
            System.out.println("文件创建成功~~~");
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

}
