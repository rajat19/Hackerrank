#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007
int main() {
    int t;
    long long n, a;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n<=mod) a = n*n;
        else a = (n%mod)*(n%mod);
        a = a%mod;
        cout<<a<<endl;
    }
    return 0;
}

