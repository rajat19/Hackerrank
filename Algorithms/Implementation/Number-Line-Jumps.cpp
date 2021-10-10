/* Written by Mayank Pathak */

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x1,v1,x2,v2,t;
    cin>>x1>>v1>>x2>>v2;

    if(x1>x2)
    {
        t=x1;
        x1=x2;
        x2=t;
        t=v1;
        v1=v2;
        v2=t;
    }
    while(x2>x1)
    {
        x1=x1+v1;
        x2=x2+v2;
    }
    if(x1==x2)
     cout<<"YES";
    else
     cout<<"NO";
     return 0; 
}



