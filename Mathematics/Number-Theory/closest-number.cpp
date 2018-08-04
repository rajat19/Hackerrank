#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, a, b, x, p, div, m, n;
    cin>>t;
    while(t--) {
        cin>>a>>b>>x;
        p = pow(a, b);
        div = (p/x);
        m = p - (div*x);
        n = (div+1)*x - p;
        if(m<=n) {
            cout<<(div*x)<<endl;
        }
        else {
            cout<<((div+1)*x)<<endl;
        }
    }
    return 0;
}

