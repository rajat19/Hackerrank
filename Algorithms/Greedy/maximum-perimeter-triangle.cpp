#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll n, i, flag = 0, k, j;
    vector<ll> v;
    cin>>n;
    v.resize(n);
    for(i=0; i<n; i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for(i = v.size() - 1; i >= 2; i--) {
        k = i - 2;
        for(j = i - 1; j>=1; j--) {
            if(k>=0 && v[k] + v[j] > v[i]) {
                flag = 1;
                cout<<v[k]<<" "<<v[j]<<" "<<v[i]<<endl;
                break;
            }
            k--;
        }
        if(flag) break;
    }
    if(!flag) cout<<-1<<endl;
    return 0;
}
