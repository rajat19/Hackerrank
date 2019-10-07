
#include<bits/stdc++.h>

#define INF 1000000000
#define ll long long
#define FOR(i,s,n) for(ll i = s; i < (n); i++)
#define FORD(i,s,n) for(ll i=(n)-1;i>=s;i--)
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define mset(x) memset(x,0,sizeof(x))

using namespace std;

ll t,n,m,x,y,z,w,r;
int main()
{
    cin>>n;
    ll arr[n];
    ll ans[n];
    FOR(i,0,n)
    {
        ans[i] = 1;
        cin>>arr[i];
    }
    FOR(i,1,n)
    {
        if(arr[i]>arr[i-1] && ans[i]<=ans[i-1])
        {
            ans[i] = ans[i-1] + 1;
        }
    }
    ll sum = 0;
    FORD(j,0,n-1)
    {
        if(arr[j]>arr[j+1] && ans[j]<=ans[j+1])
        {
            ans[j] = ans[j+1] + 1;
        }
        sum += ans[j];
    }
    sum += ans[n-1];
    cout<<sum;
    return 0;
}
