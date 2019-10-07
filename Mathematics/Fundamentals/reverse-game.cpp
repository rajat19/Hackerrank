#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t, n, k, pos;
    cin>>t;
    while(t--) {
        pos = -1;
        cin>>n>>k;
        if(k<(n-1)/2) {
            pos = 2*k + 1;
        }
        else {
            pos = 2*(n-1-k);
        }
        cout<<pos<<endl;
    }
    return 0;
}
