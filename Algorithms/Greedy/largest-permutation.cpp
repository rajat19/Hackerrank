#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll n, i, k, x;
    vector<pair<ll, ll>> v, so;
    cin>>n>>k;
    v.resize(n);
    for(i=0; i<n; i++) {
        cin>>x;
        v[i] = (make_pair(x, i));
    }
    so = v;
    sort(so.begin(), so.end());
    reverse(so.begin(), so.end());
    for(i=0; i<n; i++) {
        if(k<=0) break;
        if(v[i].first < so[i].first) {
            x = v[i].first;
            v[i].first = so[i].first;
            v[so[i].second].first = x;
            k--;
        }
    }
    for(i=0; i<n; i++) {
        cout<<v[i].first<<" ";
    }
    return 0;
}
