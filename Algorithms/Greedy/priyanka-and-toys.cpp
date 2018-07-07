#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define pii pair<int, int>

int main() {
	int i, n, j, co = 0;
	vector<pii> v;
	cin>>n;
	v.resize(n);
	for(i=0; i<n; i++) {
		cin>>j;
		v[i] = make_pair(j, 0);
	}
	sort(v.begin(), v.end());
	for(i=0; i<n; i++) {
		if(v[i].second == 0) {
			co++;
			for(j=i; v[j].first<=v[i].first + 4 && j<n; j++) {
				v[j].second = 1;
			}
		}
	}
	cout<<co<<endl;
	return 0;
}
