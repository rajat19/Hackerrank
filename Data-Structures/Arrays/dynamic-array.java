import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) throws IOException{
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int q = in.nextInt();
        ArrayList<Integer> group[] = new ArrayList[n];
        int seq, lastAns = 0;
        
        for(int i = 0; i < n; i++) {
            group[i] = new ArrayList<Integer>();
        }
        while(q!=0) {
            int a = in.nextInt();
            int x = in.nextInt();
            int y = in.nextInt();
            switch(a) {
                case 1:
                    seq = ((x^lastAns)%n);
                    group[seq].add(y);
                    break;
                case 2:
                    seq = ((x^lastAns)%n);
                    int l = group[seq].size();
                    lastAns = group[seq].get(y%l);
                    System.out.println(lastAns);
            }
            q--;
        }
    }
}