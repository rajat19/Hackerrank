import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t != 0) {
            String s = in.next();
            int i = 1;int flag = 0;
            int l = s.length();
            while(i != l-1) {
                char a = s.charAt(i);
                char b = s.charAt(i+1);
                char c = s.charAt(l-i-1);
                char d = s.charAt(l-i-2);
                int dif1 = Math.abs((int)(a-b));
                int dif2 = Math.abs((int)(c-d));
                if(dif1 != dif2) {
                    flag = 1;
                    break;
                }
                i++;
            }
            if(flag == 1) System.out.println("Not Funny");
            else System.out.println("Funny");
            t--;
        }
    }
}