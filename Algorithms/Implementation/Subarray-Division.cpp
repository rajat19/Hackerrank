/* Code written by Mayank Pathak */


#include <bits/stdc++.h>

using namespace std;
int main(){

int n,d,m,c=0,s=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cin>>d>>m;
for(int i=0;i<n;i++)
{
    int l=i+m;
    if(l>n)
    {
        break;
    }
    int s=0;
    for(int j=i;j<l;j++)
    {
        s+=a[j];
    }
    if(s==d)
        {
            c++;
        }
}
    cout<<c;
    return 0;
}




