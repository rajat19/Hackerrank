import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    int i;double d;String s;
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        i = Integer.parseInt(br.readLine());
        d = Double.parseDouble(br.readLine());
        s = br.readLine();
        
        System.out.println("String: "+s);
        System.out.println("Double: "+d);
        System.out.println("Integer: "+i);
    }
}
