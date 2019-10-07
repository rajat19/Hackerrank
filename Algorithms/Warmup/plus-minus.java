import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int sp = 0, sn = 0, sz = 0;
        int arr[] = new int[n];
        for(int arr_i=0; arr_i < n; arr_i++){
            arr[arr_i] = in.nextInt();
            if(arr[arr_i] > 0)
                sp++;
            else if(arr[arr_i] < 0)
                sn++;
            else sz++;
        }
        System.out.println(sp * 1.0/n);
        System.out.println(sn * 1.0/n);
        System.out.println(sz * 1.0/n);
    }
}
