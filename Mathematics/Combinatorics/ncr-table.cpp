#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000000

int main() {
    ll t, n, j, i;
    vector<vector<ll>> c;
    c.resize(1001, vector<ll>(1001, 0));
    for(i=0; i<=1000; i++) {
        for(j=0; j<=i; j++) {
            if(j==0 || j==i) c[i][j] = 1;
            else c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
        }
    }
    cin>>t;
    while(t--) {
        cin>>n;
        for(i=0; i<=n; i++) {
            cout<<c[n][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
