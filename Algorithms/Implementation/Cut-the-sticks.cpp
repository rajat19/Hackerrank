/* Code written by MAYANK PATHAK*/


#include<bits/stdc++.h>
using namespace std;
int ar[1001],result[1001],k = 0,n;

  int smal_cal(){

  int cnt = 0,smal = 1001;
  for(int i = 0; i < n; i++){
     if(smal >= ar[i] && ar[i] != 0)smal = ar[i];
       if(ar[i] != 0)cnt++;
       }
     if(cnt != 0)cout << cnt << endl;
       return smal;
      }
     int main(){

      cin >> n;
      for(int i = 0; i < n; i++){
      cin >> ar[i];
       }
       int smal = 1001;
      for(int i = 0; i < n; i++){
       smal = smal_cal();
      for(int j = 0; j < n; j++)if(ar[j] != 0)ar[j]-=smal;
         }
      return 0;
    }



