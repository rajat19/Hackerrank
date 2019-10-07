#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, i, n, mx=0;
	cin>>n;
	vector<int> v(n, 0);
	for(i=0; i<n; i++) {
		cin>>v[i];
		// cout<<mx<<" "<<v[i]<<endl;
        if (v[i] > mx) mx = v[i];
	}
    x=0;
	for(i=0; i<n; i++) {
		if (v[i] == mx) x++;
	}
	cout<<x;
	return 0;
}