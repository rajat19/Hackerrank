#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s, i, j, k, n, c=0;
    cin>>s;
    int a[s];
    for(i=0; i<s; i++) cin>>a[i];
    for(i=1; i<s; i++) {
        n = a[i];
        k = i;
        while(k>0 && a[k-1]>n) {
            a[k] = a[k-1];
            k = k - 1;
            c++;
        }
        a[k] = n;
    }
    cout<<c;
    return 0;
}

