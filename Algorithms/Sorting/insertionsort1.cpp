#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s, i, j, k, n;
    cin>>s;
    int a[s];
    for(i=0; i<s; i++) cin>>a[i];
    n = a[s-1];
    j = s-1;
    int flag = 0;
    for(i=s-2; ; i--) {
        k = 0;
        if(flag==1) break;
        while(k<=i) {
            cout<<a[k]<<" ";
            k++;
        }
        if(a[k-1] > n) {
            cout<<a[k-1]<<" ";
            a[j] = a[k-1];
            a[k-1] = n;
            j = j-1;
            
        }
        else {
            cout<<n<<" ";
            flag = 1;
        }
        while(k+1<s) {
            cout<<a[k+1]<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
