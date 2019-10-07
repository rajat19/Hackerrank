#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
#define N 105
int a[N];
int b[N];
vector<int>res;
int temp[N][N];


void print(int i,int j)
{
    if(i==0 || j==0)
        res.clear();
    else if(a[i]==b[j])
    {
        print(i-1,j-1);
        res.push_back(a[i]);
    }
    else if(temp[i][j]==temp[i][j-1])
    {
        print(i,j-1);
    }
   else
    {
        print(i-1,j);
    }
}

int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        
    }
      for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
         b[i]=x;
        
    }
    
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0|| j==0)
            {
                temp[i][j]=0;
            }
            else if(a[i]==b[j])
            {
                temp[i][j]=temp[i-1][j-1]+1;
            }
             else 
            {
                temp[i][j]=max(temp[i-1][j],temp[i][j-1]);
            }
        }
    }
    
    print(m,n);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    
}