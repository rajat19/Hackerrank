#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long r, c;
    cin>>r>>c;
    long ans = ((r-1)/2)*10 + (r - ((r-1)/2)*2)/2 + (c-1)*2;
    cout<<ans;
    return 0;
}

