#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int k, n, i, x, y;
    vector<pair<int, int>> v;
    cin>>n>>k;
    v.resize(n);
    for(i=0; i<n; i++) {
        cin>>x>>y;
        v[i] = make_pair(x, y);
    }
    sort(v.begin(), v.end());
    x = 0; y = 0;
    for(i=v.size() - 1; i>=0; i--) {
        if(v[i].second == 1) {
            if(x < k) {
                y += v[i].first;
                x++;
            }
            else y -= v[i].first;
        }
        else {
            y += v[i].first;
        }
    }
    cout<<y<<endl;
    return 0;
}