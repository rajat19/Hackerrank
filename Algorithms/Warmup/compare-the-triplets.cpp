#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[3], b[3], pta = 0, ptb = 0;
    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    for(int i=0; i<3; i++) {
        if(a[i]>b[i]) pta++;
        else if(b[i]>a[i]) ptb++;
    }
    cout<<pta<<" "<<ptb;
    return 0;
}
