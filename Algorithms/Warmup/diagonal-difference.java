import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int a[][] = new int[n][n];
        int s1 = 0, s2 = 0;
        for(int a_i=0; a_i < n; a_i++){
            for(int a_j=0; a_j < n; a_j++){
                a[a_i][a_j] = in.nextInt();
                if(a_i == a_j)
                    s1 += a[a_i][a_j];
                if(a_i == n - a_j -1)
                    s2 += a[a_i][a_j];
            }
          
        }
        System.out.println(Math.abs(s1 - s2));
    }
}
