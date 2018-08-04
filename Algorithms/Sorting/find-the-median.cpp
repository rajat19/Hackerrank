#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, *ar, i;
    cin>>n;
    ar = (int*) malloc(sizeof(int));
    for(i=0; i<n; i++) {
        cin>>ar[i];
    }
    sort(ar, ar+n);
    cout<<ar[(n-1)/2];
    return 0;
}

