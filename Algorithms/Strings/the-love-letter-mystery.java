import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
 static int palin(String s)
 {
     int l=s.length();
     for(int i=0;i<l;i++)
     {if(s.charAt(i)!=s.charAt(l-1-i))
         return 0;
     }
     return 1;
 }
    static int theLoveLetterMystery(String s){
        // Complete this function
    int l=s.length();int ctr=0;char[] m = s.toCharArray();
        if(palin(s)==0)
        {for(int i=0;i<l/2;i++)
        {
            if(m[i]>m[l-1-i])
            {ctr+=m[i]-m[l-1-i];
                m[i]=m[l-1-i];
            }
            else if(m[i]<m[l-1-i])
            {
                ctr+=s.charAt(l-1-i)-s.charAt(i);
                m[l-1-i]=m[i];
            }
            s=String.valueOf(m);
            if(palin(s)==1)
                break;
        }
        }
        else
            return 0;
        return ctr;
            
        
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            String s = in.next();
            int result = theLoveLetterMystery(s);
            System.out.println(result);
        }
    }
}
