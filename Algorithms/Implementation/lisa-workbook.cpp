#include <iostream>
using namespace std;

int main() {
	int n, k, i;
	cin>>n>>k;
	int a[n];
	for(i=0; i<n; i++) {
		cin>>a[i];
	}
	int ch=0, pg=0, mn, mx,add, r, tot=0, temp;
	while(ch<n) {
		mn = 1;
		temp = a[ch];
		mx = (temp>k)?k:temp;
		pg++;
		if(pg>=mn && pg<=mx) {
			tot++;
		}
		r = temp/k;
		while(r>0 && temp>k) {
			temp = temp - k;
			mn = mx + 1;
			add = ((temp>k)?k:temp);
			mx = mx + add;
			pg++;
			if(pg>=mn && pg<=mx) {
				tot++;
			}
			r = temp/k;
		}
		ch++;
	}
	cout<<tot;
	return 0;
}

