import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static String gameOfThrones(String s){
  int a[]=new int[26];int ctr=0;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            a[s.charAt(i)-'a']++;
            //a[s.charAt(l-i-1)-'a']++;
            
        }
        for(int i=0;i<26;i++)
        {
            if(Math.abs(a[i])%2==1)
                ctr++;
        }
        if(l%2==1&&(ctr>1))
            return "NO";
        if(l%2==0&&ctr!=0)
            return "NO";
        return "YES";
    
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String result = gameOfThrones(s);
        System.out.println(result);
    }
}
