#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i,k,a[1000],s,carry,d;
    k=n;
    
    for(i=0;k!=0;i++){
        a[i]=k%10;
        k=k/10;
    }
    int len=i;
    
    for(i=n-1;i>1;i--){
        carry=0;
        for(k=0;k<len;k++){
            d=a[k]*i+carry;
            a[k]=d%10;
            carry=d/10;
        }
            while(carry){
                len++;
                a[k]=carry%10;
                carry=carry/10;
                k++;
            }
        }
        
    for(i=len-1;i>=0;i--){
        cout<<a[i];
    }
    return 0;
}
