/*
    LOGIC:
        Construct two array a,b;
        a[i] -> is number of array that can be formed of size i with no same consecutive elements 
                which starts with 1 and end with x.

        b[i] -> is number of array that can be formed of size i with no same consecutive elements
                which starts with 1 and doesn't end with x
*/

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007;

vector<string> split_string(string);

long countArray(int n, int k, int x) {
    vector<long> a(n), b(n);

    a[0]=(x==1)?1:0;
    b[0]=(x==1)?0:1;

    for(int i=1;i<n;i++)
    {
        a[i] = b[i-1] % mod;
        b[i] = (a[i-1]* (k-1) + b[i-1] * (k-2)) % mod;
    }
    return a[n-1];
}

int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    cout<<countArray(n, k, x)<<endl;

    return 0;
}
