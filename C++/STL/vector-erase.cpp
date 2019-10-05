#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int p;
    cin>>p;
    a.erase(a.begin()+p-1);
    int q;
    cin>>p>>q;
    a.erase(a.begin()+p-1,a.begin()+q-1);
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    return 0;
}

