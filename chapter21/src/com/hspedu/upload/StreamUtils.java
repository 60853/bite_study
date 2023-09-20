package com.hspedu.upload;

import java.io.*;

/**
 * @author 文涛
 * @version 1.0
 * @since 2023/9/20 22:49
 */
public class StreamUtils {
    public static byte[] streamToByteArray(InputStream is) throws IOException {
        ByteArrayOutputStream bos = new ByteArrayOutputStream();
        byte[] b = new byte[1024];
        int len;
        while ((len= is.read(b))!=-1){
            bos.write(b,0,len);
        }
        byte[] array = bos.toByteArray();
        bos.close();
        return array;
    }
}
