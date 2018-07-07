import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int k = in.nextInt();
            int tot = 0;
            for(int i=0; i < n; i++){
                int s = in.nextInt();
                if(s <= 0)
                    tot++;
            }
            if(tot >= k)
                System.out.println("NO");
            else System.out.println("YES");
            tot = 0;
        }
    }
}
