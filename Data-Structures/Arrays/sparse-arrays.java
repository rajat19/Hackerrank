import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String st[] = new String[n];
        int i = 0;
        while(i < n) {
            st[i] = in.next();
            i++;
        }
        int q = in.nextInt();
        while(q!=0) {
            int count = 0;
            String s = in.next();
            for(i=0; i<n; i++) {
                if(s.equals(st[i]))
                    count++;
            }
            System.out.println(count);
        }
    }
}
