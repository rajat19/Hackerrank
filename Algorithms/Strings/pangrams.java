import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int l = s.length();
        int i = 0, pos=0;
        int a[] = new int[26];
        while(i<26) {
            a[i] = 0;
            i++;
        }
        i=0;
        while(i < l) {
            char c = s.charAt(i);
            if((c>='a' && c<='z')) {
                pos = (int)(c - 'a');
                a[pos] = a[pos]+1;
            }
            if((c>='A' && c<='Z')) {
                pos = (int)(c - 'A');                
                a[pos] = a[pos]+ 1;
            }
            i++;
        }
        i=0;
        int flag= 0;
        while(i <26) {
            if(a[i] == 0) {          
                flag =1;
                break;
            }
            i++;
        }
        if(flag==1) System.out.print("not pangram");
        else System.out.print("pangram");
    }
}
