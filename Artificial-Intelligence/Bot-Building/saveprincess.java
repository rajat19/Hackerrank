import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
static void displayPathtoPrincess(int n, String [] grid){
    char x[][] = new char[n][n];
    int pi = 0, pj = 0, mi = 0, mj = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            x[i][j] = grid[i].charAt(j);
            if(x[i][j]=='m'){
                mi = i;
                mj = j;
            }
            if(x[i][j]=='p'){
                pi = i;
                pj = j;
            }           
        }
    }
    if(pi > mi){
        for(int i = 0; i < (pi-mi); i++)
            System.out.println("DOWN");
    }
    if(pi < mi){
        for(int i = 0; i < (mi-pi); i++)
            System.out.println("UP");
    }
    if(pj > mj){
        for(int i = 0; i < (pj-mj); i++)
            System.out.println("RIGHT");
    }
    if(mj > pj){
        for(int i = 0; i < (mj-pj); i++)
            System.out.println("LEFT");
    }
  }
public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int m;
        m = in.nextInt();
        String grid[] = new String[m];
        for(int i = 0; i < m; i++) {
            grid[i] = in.next();
        }

    displayPathtoPrincess(m,grid);
    }
}

