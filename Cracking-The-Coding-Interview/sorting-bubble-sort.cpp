#include <bits/stdc++.h>

using namespace std;
int main() {
    int i, j, n, swaps = 0, *a;
    cin>>n;
    a = (int*) malloc(sizeof(int)*n);
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n-1; j++) {
            if(a[j] > a[j+1]) {
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
                swaps++;
            }
        }
    }
    cout<<"Array is sorted in "<<swaps<<" swaps.\nFirst Element: "<<a[0]<<"\nLast Element: "<<a[n-1];
    return 0;
}