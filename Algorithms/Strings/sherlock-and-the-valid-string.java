import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static int[] insertionSort(int[] A){
        for(int i = 1; i < A.length; i++){
            int value = A[i];
            int j = i - 1;
            while(j >= 0 && A[j] <value){
                A[j + 1] = A[j];
                j = j - 1;
            }
            A[j + 1] = value;
        }

        return A;
    }

    static String isValid(String s){
     
        int l=s.length();int []a=new int[26];int c=0;
        for(int i=0;i<l;i++)
        {
            a[s.charAt(i)-'a']++;
        }insertionSort(a);
        for(int i=0;i<26;i++)
        {
            if(a[i]>0)
                c++;
       
        }
        
        if(a[0]==a[c-1])
            return "YES";
          if(a[c-1]==1&&a[0]==a[c-2])
              return "YES";
        if(a[1]==a[c-1]&&a[0]-a[1]==1)
            return "YES";
        
            
        return "NO";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = isValid(s);
        System.out.println(result);
    }
}

