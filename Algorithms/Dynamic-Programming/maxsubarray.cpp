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
    cin>>t;
    while(t--)
    {
        ll ans1 = -10000000;
        cin>>n;
        ll arr[n];
        ll tmp[n] = {0};
        FOR(i,0,n)
        {
            cin>>arr[i];
            ans1 = max(ans1,arr[i]);
        }
        tmp[0] = arr[0];
        ll ans = arr[0];
        ll i = 1;
        while(i<n)
        {
            tmp[i] = max(tmp[i-1]+arr[i],arr[i]);
            ans = max(ans,tmp[i]);
            i++;
        }
        cout<<ans<<" ";
        ans = 0;
        FOR(i,0,n)
        {
            if(arr[i]>0)
                ans += arr[i];
        }
        if(ans == 0)
            cout<<ans1<<endl;
        else
            cout<<max(ans,ans1)<<endl;
    }
    return 0;
}
