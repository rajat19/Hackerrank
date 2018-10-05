#include <bits/stdc++.h>
using namespace std;
    
#define Pair pair<int, int>
    
#define MAX 100000
    
Pair v[MAX];
int a[MAX];
int dp[MAX + 1];
    
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        v[i] = make_pair(x - y, x + y);
    }
    sort(v, v + n);
    for (int i = 0; i < n; i++)
        a[i] = v[n - i - 1].second;
    int r = 1;
    dp[1] = a[0];
    for (int i = 1; i < n; i++) {
        int low = 1, high = r;
        if (a[i] <= dp[1]) {
            dp[1] = a[i];
            continue;
        }
        while (low < high) {
            int mid = (low + high + 1) / 2;
            if (dp[mid] >= a[i])
                high = mid - 1;
            else
                low = mid;
        }
        if (low == r) r++;
        dp[low + 1] = a[i];
    }
    cout << r << endl;
    return 0;
}
