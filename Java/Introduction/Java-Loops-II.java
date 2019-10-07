import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        //a+20b,a+20b+21b,......,a+20b+21b+...+2n−1b
        Scanner in = new Scanner(System.in);
        cases = in.nextInt();
        long temp;
        long sum[][] = new int[cases][15];
        int a[] = new int[cases] ;
        int b[] = new int[cases] ;
        int n[] = new int[cases] ;
        for(int i = 0; i < cases; i++) {
            temp = 0;
            a[i] = in.nextInt();
            b[i] = in.nextInt();
            n[i] = in.nextInt();
            temp = a[i];
            for(int j = 0; j < n[i]; j++) {
                temp = temp + (b[i] * Math.pow(2,j));
                sum[i][j] = temp;
            }
        }
        for(int i = 0; i < cases; i++) {
            for(int i = 0; i < cases; i++) {
                System.out.print(sum[i][j]);
            }
            System.out.println();
        }
    }
}