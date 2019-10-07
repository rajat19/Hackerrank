#include <bits/stdc++.h>

using namespace std;

const int max_n = (1e5) + 5;

int n,q,x,y;
int a[max_n];
bool odd = false;

int main()
{
	cin >> n;
	for(int i=0;i<n;++i)
	{
		cin >> a[i];
	}
	cin >> q;
	for(int i=0;i<q;++i)
	{
		odd = false;
		cin >> x >> y;
		--x;
		--y;
		if(a[x]&1)
			odd = true;
		if(y > x and a[x+1] == 0)
			odd = true;
		if(odd)
			cout << "Odd\n";
		else
			cout << "Even\n";
	}
	return 0;
}