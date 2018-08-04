#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define MOD 1000000007

int main() {
    ll t, m, n, i, j, ans;
    vector<vector<ll>> v;
    cin>>t;
    while(t--) {
        cin>>m>>n;
        v.resize(m, vector<ll> (n, 0));
        for(i=0; i<n; i++) {
            v[0][i] = 1;
        }
        for(i=0; i<m; i++) {
            v[i][0] = 1;
        }
        for(i=1; i<m; i++) {
            for(j=1; j<n; j++) {
                v[i][j] = v[i][j-1] + v[i-1][j];
            }
        }
        ans = (v[m-1][n-1])%MOD;
        cout<<ans<<endl;
        v.clear();
    }
    return 0;
}

