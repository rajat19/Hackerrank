#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long int i, n, m, a, b, k, mx;
    cin>>n>>m;
    vector<long int> ar(n+1, 0);
    while(m--) {
        cin>>a>>b>>k;
        ar[a] += k;
        if(b+1<=n) ar[b+1] -= k;
    }
    a = 0; mx = 0;
    for(i=1; i<=n; i++) {
        a = a + ar[i];
        if(a > mx) mx = a;
    }
    cout<<mx;
    return 0;
}

