#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int s, t, a, b, m, n, ap = 0, o = 0, x, d;
    cin>>s>>t>>a>>b>>m>>n;
    while(m!=0) {
        cin>>x;
        d = a + x;
        if(d>=s && d<=t) ap++;
        m--;
    }
    while(n!=0) {
        cin>>x;
        d = b + x;
        if(d>=s && d<=t) o++;
        n--;
    }
    cout<<ap<<"\n"<<o;
    return 0;
}
