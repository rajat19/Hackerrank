#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll result(ll n)
{
   if (n < 10)
   return n;
   return result(n%10 + n/10);
}

int main()
{
    string n;
    ll k;
    cin>>n>>k;
    ll inter = 0;
    for(ll i=0; i<n.size(); i++)
    {
        inter += n[i] - '0';
    }
    inter = inter*k;
    cout<<result(inter);
}

