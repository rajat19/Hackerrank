import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        String r = "";
        int k = sc.nextInt();
        for(int i = 0; i < s.length(); i++) {
            int n = Integer.parseInt("" + s.charAt(i));
            n = (n+k)%10;
            r += "" + n;
        }
        System.out.println(r);
    }
}
