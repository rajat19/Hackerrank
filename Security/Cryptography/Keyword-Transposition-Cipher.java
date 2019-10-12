import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        while(tc-- > 0) {
            String m = sc.next();
            String s = "";
            
            //Removing duplicates
            for(int i = 0; i < m.length(); i++) {
                if(s.indexOf(m.charAt(i)) == -1) s += "" + m.charAt(i);
            }
            
            //Make rows and columns
            int c = 0;
            String alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            ArrayList<String> a = new ArrayList<String>();
            a.add(s);
            for(int i = 0; i <= 26/s.length(); i++) {
                String row = "";
                for(int j = 0; j < s.length() && c != 26;) {
                    if(s.indexOf(alp.charAt(c)) == -1)
                    {
                        row += "" + alp.charAt(c);
                        j++;
                    }
                    c++;
                }
                a.add(row);
            }
            
            //transpose
            ArrayList<String> t = new ArrayList<String>();
            for(int i = 0; i < s.length(); i++) {
                String temp = "";
                for(int j = 0; j <= 26/s.length(); j++) {
                    if(i < a.get(j).length()){
                        String s1 = a.get(j);
                        temp += "" + s1.charAt(i);
                    }
                }
                t.add(temp);
            }
        
            //Sort
            Collections.sort(t);
        
            String cipher = "";
            for(int i = 0; i < t.size(); i++) {
                cipher += t.get(i);
            }
        
            //dealing with query
            sc.nextLine();
            String q = sc.nextLine();
            //System.out.println(cipher);
            for(int i = 0; i < q.length(); i++) {
                char ch = q.charAt(i);
                if(ch == ' ') System.out.print(" ");
                else {
                    System.out.print(alp.charAt(cipher.indexOf(ch)));
                }
            }
            System.out.println();
            
        }
    }
}
