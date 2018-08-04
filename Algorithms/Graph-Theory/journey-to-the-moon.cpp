#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> g;
    int n, m, x, y, c=0, i, j;
    cin>>n>>m;
    g.resize(n, vector<int>(n, 0));
    for(i=0; i<n; i++) g[i][i] = 1;
    while(m--) {
        cin>>x>>y;
        g[x][y] = 1;
    }
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            if(g[i][j]==0) c++;
        }
    }
    cout<<c;
    return 0;
}

