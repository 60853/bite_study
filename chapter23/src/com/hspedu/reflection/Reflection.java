package com.hspedu.reflection;

import java.io.FileInputStream;

import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.util.Properties;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/25 20:04
 */
@SuppressWarnings("all")
public class Reflection {
    public static void main(String[] args) throws IOException, ClassNotFoundException, InstantiationException, IllegalAccessException, NoSuchMethodException, InvocationTargetException {

        System.out.println("传统方法~~~~~~~~~~~~~~~~~");
        Properties properties = new Properties();
        properties.load(new FileInputStream("src\\re.properties"));
        String classfullpath = properties.get("classfullpath").toString();
        String method = properties.get("method").toString();
        System.out.println(classfullpath);
        System.out.println(method);

        //使用反射机制解决
        //1. 加载类 返回 Class 类对象 cls
        Class cls = Class.forName(classfullpath);
        //2. 通过 cls 得到加载的类 com.hspedu.Cat 的对象实例
        Object o = cls.newInstance();
        System.out.println("o的运行类型："+o.getClass());
        //3. 通过 cls 得到加载的类 com.hspedu.Cat 的 method 的方法对象
        Method method1 = cls.getMethod(method);
        method1.invoke(o);
    }
}
