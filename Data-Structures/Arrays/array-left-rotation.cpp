#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m,i;
    cin>>n>>m;
    int a[n];
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++) cout<<a[(n+i+m)%n]<<" ";
    return 0;
}
