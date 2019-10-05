import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

      Scanner scan=new Scanner(System.in);
      List <Integer> l=new ArrayList();
      int n=scan.nextInt();
      while(n-->0)
        l.add(scan.nextInt());
      
      int m=scan.nextInt();
      scan.nextLine();
      while(m-->0){
        String ms=scan.nextLine();
        String q=scan.nextLine();
        if(ms.equals("Insert")){
          String a[]=q.split(" ");
          l.add(Integer.valueOf(a[0]),Integer.valueOf(a[1]));
        }else  {
          int a=Integer.valueOf(q);
          l.remove(a);
        }
      }
      
      for(int i=0;i<l.size();i++){
        System.out.print(l.get(i)+" ");
      }
    }
}
