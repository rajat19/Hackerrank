#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll reverse(ll x) {
    ll d = 1, p = 0, m;
    m = x;
    while(m!=0) {
        d = d*10;
        m = m/10;
    }
    d= d/10;
    while(x!=0) {
        m = x % 10;
        p = p + (m*d);
        d = d / 10;
        x = x / 10;
    }
    return p;
}

int main() {
    ll a, b, i, k, x, c = 0;;
    cin>>a>>b>>k;
    for(i=a; i<=b; i++) {
        x = (i - reverse(i));
        x = (x>0)?x:-x;
        x = x % k;
        if(x==0) c++;
    }
    cout<<c;
    return 0;
}
