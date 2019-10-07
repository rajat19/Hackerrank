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
    for(i=1; i<s; i++) {
        n = a[i];
        k = i;
        while(k>0 && a[k-1]>n) {
            a[k] = a[k-1];
            k = k - 1;
        }
        a[k] = n;
        for(j=0; j<s; j++) {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
