/* Code written by Mayank Pathak */


#include <bits/stdc++.h>
using namespace std;
 int main() {
   string str;
     long long n,cnt = 0,rem,rept,remCnt = 0;
      cin >> str;
      cin >> n;
     long long len = str.length();
       rem = n%len;
        rept = n/len;
       for(int i = 0; i < len; i++){
          if(str[i] == 'a')cnt++;
            if(str[i] == 'a' && i < rem)remCnt++;
         }
    cout << (cnt*rept)+remCnt << endl;
    return 0;
  }




