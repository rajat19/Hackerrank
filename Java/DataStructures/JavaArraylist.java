import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
 
      Scanner scan=new Scanner(System.in);
      
      int n=Integer.parseInt(scan.nextLine()),k=0;
      
      List a[]=new ArrayList[n];
      
      while(n-->0){
        String str[]=scan.nextLine().split(" ");
        List aList=new ArrayList();
       for(int i=0;i<str.length;i++){
           aList.add(str[i]);
           
       }
        a[k++]=aList;
      }
      n=Integer.parseInt(scan.nextLine());
      while(n-->0){
       String str[]= scan.nextLine().split(" ");
        
        int x=Integer.parseInt(str[0])-1;
        int y=Integer.parseInt(str[1]);
        
        List b=a[x];
        
        if(y<b.size())
          System.out.println(b.get(y));
        else
          System.out.println("ERROR!");
          
      }
      
    }
}