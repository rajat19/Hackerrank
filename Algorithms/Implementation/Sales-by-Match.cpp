/* Code written by MAYANK PATHAK */

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int f[101]={};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        f[a]++;
    }
    int c=0;
    for(int i=0;i<=100;i++)
    {
        c+=(f[i]/2);
    }
    cout<<c;
    return 0;
}



