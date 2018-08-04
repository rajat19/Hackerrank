import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
static void nextMove(int n, int r, int c, String [] grid){
    char x[][] = new char[n][n];
    String next;
    int pi = 0, pj = 0, di, dj;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            x[i][j] = grid[i].charAt(j);
            if(x[i][j] == 'p'){
                pi = i;
                pj = j;
            }
        }
    }
    di = Math.abs(pi - r);
    dj = Math.abs(pj - c);
    next = (di>dj)?((pi>r)?"DOWN":"UP") :((pj>c)?"RIGHT":"LEFT") ;
    System.out.println(next);
  }
public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n,r,c;
        n = in.nextInt();
        r = in.nextInt();
        c = in.nextInt();
        in.useDelimiter("
");
        String grid[] = new String[n];


        for(int i = 0; i < n; i++) {
            grid[i] = in.next();
        }

    nextMove(n,r,c,grid);

    }
}

