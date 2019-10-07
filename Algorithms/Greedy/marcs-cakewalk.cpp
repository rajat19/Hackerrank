#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    ll i, n, d=0;
    vector<int> c;
    cin>>n;
    c.resize(n, 0);
    for(i=0; i<n; i++) {
        cin>>c[i];
    }
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    for(i=0; i<n; i++) {
        d += c[i] * pow(2, i);
    }
    cout<<d;
    return 0;
}
