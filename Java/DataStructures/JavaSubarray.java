import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int count=0;
  public static void main(String[] args) {
 
    
    Scanner scan=new Scanner(System.in);
    int n=scan.nextInt();
    int a[]=new int[n],i=0,j=0,m=n;
    while(n-->0)
      a[i++]=scan.nextInt();
    
      i=0;
 
    while(i<m){
      j=i;
       while(j < m){
        Sum(a,i,j++);
 
      }
    i++;
    }
    
    System.out.println(count);
    }
  
  static void Sum(int a[],int f,int to){
   int sum=0;
     while(f<=to)
       sum+=a[f++];
       
     if(sum<0)
        count++;
  }
  
  
}