/* Code written by MAYANK PATHAK*/

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k,b,s=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    cin>>b;
    int l=s-a[k];

    if((l/2)==b)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<b-(l/2);
    }
    return 0;

}



