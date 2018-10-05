import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
     public static char[] insertionSort(char[] A){
        for(int i = 1; i < A.length; i++){
            char value = A[i];
            int j = i - 1;
            while(j >= 0 && A[j]<value){
                A[j + 1] = A[j];
                j = j - 1;
            }
            A[j + 1] = value;
        }

        return A;
    }
    static int ana(String s1,String s2)
    {
        int l1=s1.length();int l2=s2.length();
        if(l1!=l2)
            return 0;
        else
        {
            for(int i=0;i<l1;i++)
            {
                if(s1.charAt(i)!=s2.charAt(i))
                    return 0;
            }
        }
        return 1;
    }

    static int sherlockAndAnagrams(String s){
        // Complete this function
        int l=s.length();String[] a=new String[(l*(l+1))/2];int ctr=0;
        for(int i=0;i<l;i++)
        { a[ctr++]=s.substring(i,i+1);a[ctr-1]=String.valueOf(insertionSort(a[ctr-1].toCharArray()));
            for(int j=i+1;j<l;j++)
            {
                a[ctr++]=s.substring(i,j+1);a[ctr-1]=String.valueOf(insertionSort(a[ctr-1].toCharArray()));
            }
        }
        int k=0;
        for(int i=0;i<ctr;i++)
        {
            for(int j=0;j<ctr&&j!=i;j++)
            {
                if(ana(a[i],a[j])==1)
                    k++;
                
            }
        }
        return k;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = sherlockAndAnagrams(s);
            System.out.println(result);
        }
    }
}
