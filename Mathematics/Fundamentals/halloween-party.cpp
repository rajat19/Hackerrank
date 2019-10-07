#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int a, t, n;
    cin>>t;
    while(t--){
        cin>>n;
        a = n/2;
        cout<<(a*(n-a))<<endl;
    }
    return 0;
}
