#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, i, j, x, s1=0, s2=0;
    cin>>n;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin>>x;
            if (i==j) s1+=x;
            if (i+j==n-1) s2+=x;
        }
    }
    cout<<abs(s1-s2)<<endl;
}