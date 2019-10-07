#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007
long int fac(long int x) {
    if(x==0) return 1;
    else {
        return ((x%mod)*(fac(x-1)%mod))%mod;
    }
}

int main() {
    long int t, n, m, x;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        if(m>0) {
            x = (long(fac(n+m-1)/(n*(m-1))))%mod;
            cout<<x;
        }
        else {
            cout<<0;
        }
        cout<<endl;
    }
    return 0;
}
