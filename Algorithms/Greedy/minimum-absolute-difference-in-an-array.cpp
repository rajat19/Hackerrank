#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define MAX 2*1000000000

int main() {
    ll t, i;
    vector<ll> v;
    cin>>t;
    v.resize(t, 0);
    for(i=0; i<t; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    ll mindif = MAX;
    for(i=0; i<t-1; i++) {
        int dif = abs(v[i+1] - v[i]);
        if(dif < mindif) mindif = dif;
    }
    cout<<mindif;
    return 0;
}
