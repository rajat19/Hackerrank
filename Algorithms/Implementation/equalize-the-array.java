import java.io.*;

import java.util.*;

import java.text.*;

import java.math.*;

import java.util.regex.*;



public class Solution {



    static int equalizeArray(int[] arr) {

        // Complete this function

        int max=0;

        for(int i=0;i<arr.length;i++)

        {

            if(arr[i]>max)

                max=arr[i];

        }

        return max;



    }



    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int[] arr = new int[n];int[] f=new int[101];

        for(int arr_i = 0; arr_i < n; arr_i++){

            arr[arr_i] = in.nextInt();f[arr[arr_i]]++;

        }

        int result = equalizeArray(f);

        System.out.println(n-result);

        in.close();

    }

}
