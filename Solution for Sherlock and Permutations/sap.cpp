#include <bits/stdc++.h>

using namespace std;

const int max_n = (3e3);
const int mod = (1e9) + 7;

int t,n,m;
long long c[max_n][max_n] = {0};

int main()
{
	cin >> t;
	for(int i=0;i<2000;++i)
	{
		c[i][0] = 1;
		c[i][i] = 1;
	}
	for(int i=2;i<=2000;++i)
	{
		for(int j = 1;j<i;++j)
			c[i][j] = (c[i-1][j-1] + c[i-1][j])%mod;
	}
	for(int z = 0;z<t;++z)
	{
		cin >> n >> m;
		cout << c[n+m-1][n] << endl;
	}
	return 0;
}