#include <bits/stdc++.h>

using namespace std;

long long n,mod = (1e9) + 7;
int t;

int main()
{
	cin >> t;
	for(int z=0;z<t;++z)
	{
		cin >> n;
		n = ((n%mod) * (n%mod))%mod;
		cout << n << endl;
	}
	return 0;
}