import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine(); 
        int n = in.nextInt();
        String sm[] = new String[s.length() - 2];
        String res[] = new String[s.length() - 2];
        
        for(int i = 0; i < s.length() - 2; i++) {
            sm[i] = s.substring(i, i+n);
        }
        res = sort(sm);
        System.out.println(sm[0]);
        System.out.println(sm[sm.length-1]);
    }
    public static String[] sort(String sm[]) {
        for (int i = 0; i < sm.length - 1; i++) {
            int minPos = i;
            for (int j = i + 1; j < sm.length; j++) {
                if (sm[j].charAt(0) < sm[minPos].charAt(0)) {
                    minPos = j;
                }
                else if(sm[j].charAt(0) == sm[minPos].charAt(0) && sm[j].charAt(1) < sm[minPos].charAt(1))
                    minPos = j;
                else if(sm[j].charAt(0) == sm[minPos].charAt(0) && sm[j].charAt(1) == sm[minPos].charAt(1) && sm[j].charAt(2) < sm[minPos].charAt(2))
                    minPos = j;
            }
            String temp = sm[minPos];
            sm[minPos] = sm[i];
            sm[i] = temp;
        }
        return sm;
    }
}