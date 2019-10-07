#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,Q,i,lastAnswer=0,a,x,y;
    cin>>N>>Q;
    vector <int> v[N];
    for(i=0;i<Q;i++)
    {
        cin>>a>>x>>y;
        if(a==1)
        {
            int seq=(x^lastAnswer)%N;
            v[seq].push_back(y);
        }
        else
        {
            int seq=(x^lastAnswer)%N;
            int ind=y%v[seq].size();
            lastAnswer=v[seq][ind];
            cout<<lastAnswer<<endl;
        }
    }
    return 0;
}