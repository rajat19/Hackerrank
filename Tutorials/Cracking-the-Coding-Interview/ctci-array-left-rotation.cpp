#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n, r;
    cin>>n>>r;
    vector<int> a(n, 0);
    for(i=0; i<n ; i++) cin>>a[i];
    for(i=0; i<n; i++) cout<<a[(i+r)%n]<<" ";
    return 0;
}