#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
	ll i, n, k, it;
	vector<ll> v;
	cin>>n>>k; 
	v.resize(n); 
	for(i=0; i<n; i++) cin>>v[i]; 
	sort(v.begin(), v.end()); 
	it = 0; 
	for(i=0; i<n && k - v[i]>=0; i++) { 
		it++; 
		k -= v[i]; 
	}
	cout<<it;
	return 0;
}
