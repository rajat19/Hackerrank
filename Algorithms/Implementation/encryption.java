import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String text = sc.nextLine().replaceAll("\\s+","");
        
        Double rows = Math.sqrt(text.length());
        int r = rows.intValue();
        int c;
        if(r * r == text.length())
            c = r;
        else
            c = r + 1;
        
        for(int i=0; i< c; i++){
            for(int j=i; j<text.length(); j+=c){
                if(j<text.length())
                    System.out.print(text.charAt(j));
            }
            System.out.print(" ");
        }
        
    }
}
