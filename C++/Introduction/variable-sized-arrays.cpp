#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int** a = new int*[n];
    
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        a[i] = new int[m];
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            a[i][j] = x;
        }
    }
    for (int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
} 
