import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int v = in.nextInt();
        int n = in.nextInt();
        int i = 0;
        while(n != 0) {
            int a = in.nextInt();
            if(a == v) {
                System.out.println(i);
                break;
            }
            i++;
            n--;
        }
    }
}