import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t!=0) {
            int count = 0;
            int l = in.nextInt();
            int u = in.nextInt();
            count = (int) Math.floor(Math.sqrt(u)) - (int) Math.ceil(Math.sqrt(l)) +1;
            System.out.println(count);
            t--;
        }
    }
}