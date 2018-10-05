#include<bits/stdc++.h>
using namespace std;

const int N=1e6+1;
vector<int>sieve(N);
vector<int>pls;
bool f(int n)
{
    int len=floor(log(n)/log(10))+1;
    int temp=n;
                  int ctr=0;
    for(int i=0;i<len;i++)
    {
        temp=pow(10,len-1)*(temp%10)+temp/10          ;
        if(binary_search(pls.begin(),pls.end(),temp))
                  {
                    ctr++;   
                  }
    }
    return ctr==len;
                  
    
            
                  
}

int main()
{
    for(int i=2;i<N;i++)
    {
        if(sieve[i]==0)
        {
            pls.push_back(i);
            for(int j=2*i;j<N;j+=i)
            {
                sieve[j]=1;
            }
        }
    }
    int n;
    cin >> n;
    int sum=0;
    for(int i=2;i<=n;i++)
    {
        if(f(i))
        {
            sum+=i;
        }
    }
    cout << sum << endl;
    
    
    return 0;
}