#include <bits/stdc++.h>

using namespace std;
long long dp[300][300];
int m;
long long getWays(int i, long n, vector < long > c)
{

    if(n<0||i>=m)
        return 0;
    if(n==0)
        return 1;
    
    if(dp[i][n] != -1)
        return dp[i][n];
    //cout<<"hello";
    //cout<<"n:"<<n<<" i:"<<c[i]<<endl;
    dp[i][n]=getWays(i,n-c[i],c)+getWays(i+1,n,c);
    return dp[i][n];
}

int main() {
    memset(dp,-1,sizeof(dp));
    int n;
    
    cin >> n >> m;
    vector<long> c;
    int x;
    for(int c_i = 0; c_i < m; c_i++){
       cin >> x;
        c.push_back(x);
    }
    sort(c.begin(),c.end());
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long long ways = getWays(0, n, c);
    cout<<ways;
    return 0;
}
