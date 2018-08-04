#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int i, n, p, c = 0, j, k;
    cin>>n;
    int ar[n], r[n], l[n];
    for(i=0; i<n; i++) cin>>ar[i];
    p = ar[0]; j = 0; k = 0;
    for(i=1; i<n; i++) {
        if(ar[i]<p) {
            l[j] = ar[i];
            j++;        
        }
        else if(ar[i] > p) {
            r[k] = ar[i];
            k++;
        }
        else c++;
    }
    for(i=0; i<j; i++) cout<<l[i]<<" ";
    for(i=0; i<=c; i++) cout<<p<<" ";
    for(i=0; i<k; i++) cout<<r[i]<<" ";
    return 0;
}

