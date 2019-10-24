import java.io.*;

import java.util.*;

import java.text.*;

import java.math.*;

import java.util.regex.*;



public class Solution {



    static int stringConstruction(String s) {



        int l=s.length();int ctr=0;





        for(char i='a';i<='z';i++)

        {

            int d=s.indexOf(i);



            if(d>=0)

                ctr++;

        }

        return ctr;

    }



    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int q = in.nextInt();

        for(int a0 = 0; a0 < q; a0++){

            String s = in.next();

            int result = stringConstruction(s);

            System.out.println(result);

        }

        in.close();

    }

}
