#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll getWays(ll m, ll n, vector < ll > c){
    ll table[n+1];
	memset(table, 0, sizeof(table));
	table[0] = 1;
	for(ll i=0; i<m; i++) {
		for(ll j=c[i]; j<=n; j++) {
			table[j] += table[j-c[i]];
		}
	}
	return table[n];
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> c(m);
    for(ll c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    ll ways = getWays(m, n, c);
    cout<<ways<<endl;
    return 0;
}
