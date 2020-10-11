#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    int x, a, b;
    cin >> x;
    v.erase(v.begin()+(x-1));
    cin >> a >> b;
    v.erase(v.begin()+(a-1), v.begin()+(b-1));
    cout << v.size() << endl;
    
    for(auto x:v)
        cout << x << " ";
        
    return 0;
}
