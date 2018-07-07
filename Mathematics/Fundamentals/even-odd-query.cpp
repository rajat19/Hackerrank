#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll find(vector<ll> ar, ll x, ll y) {
    if(x>y) return 1;
    if(ar[x] == 1) return 1;
    if(ar[x] == 0) {
        if(x+1 > y) return 0;
        if(ar[x+1] == 1) return 1;
        if(ar[x+1] == 0) return 1;
    }
    if(ar[x]%2 == 0) {
        if(x+1 > y) return 0;
        if(ar[x+1] == 1) return 0;
        if(ar[x+1] == 0) {
            if(x+2 > y) return 1;
            if(ar[x+2] == 1) return 1;
            if(ar[x+2] == 0) return 0;
        }
        return 0;
    }
    return 1;
}

int main() {
    ll i, n, q, a, b;
    vector<ll> v;
    cin>>n;
    v.resize(n+1);
    for(i=1; i<=n; i++) {
        cin>>v[i];
    }
    cin>>q;
    while(q--) {
        cin>>a>>b;
        if(a!=b && v[a+1]==0 && a+1<n) cout<<"Odd";
        else if(v[a]%2==0) cout<<"Even";
        else cout<<"Odd";
        cout<<endl;
    }
    return 0;
}
