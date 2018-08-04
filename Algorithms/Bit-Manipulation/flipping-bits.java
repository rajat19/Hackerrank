import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        long largest = 4294967295L;
        int n = in.nextInt();
        while(n!=0) {
            long t = in.nextInt();
            long x = t ^ largest;
            System.out.println(x);
            n--;
        }
    }
}
