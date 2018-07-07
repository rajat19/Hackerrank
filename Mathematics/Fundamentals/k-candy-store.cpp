#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000000

int main() {
    ll t, n, k;
    vector<vector<ll>> facts;
    facts.resize(2001, vector<ll>(2001, 0));
    for(t=0; t<=2000; t++) {
        for(n=0; n<=t; n++) {
            if((n==0) || (n==t)) facts[t][n] = 1;
            else facts[t][n] = (facts[t-1][n-1] + facts[t-1][n]) % mod;
        }
    }
    cin>>t;
    while(t--) {
        cin>>n>>k;
        ll ans = facts[n+k-1][n-1];
        ans %= mod;
        cout<<ans<<endl;
    }
    return 0;
}
