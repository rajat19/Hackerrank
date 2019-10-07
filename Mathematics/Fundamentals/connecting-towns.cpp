#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1234567
int main() {
    int t, n, i, c;
    cin>>t;
    while(t--) {
        cin>>n;
        int r[n-1];
        c = 1;
        for(i=0; i<n-1; i++) {
            cin>>r[i];
            c *=r[i];
            c %=mod;
        }
        c %=mod;
        cout<<c<<endl;
    }
    return 0;
}
