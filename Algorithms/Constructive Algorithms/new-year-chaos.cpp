#include <iostream>
#include <vector>
using namespace std;
void calc(vector<int> q) {
    int ans = 0;
    for (int i = q.size() - 1; i >= 0; i--) {
        if (q[i] - (i + 1) > 2) {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = max(0, q[i] - 2); j < i; j++)
            if (q[j] > q[i]) ans++;
    }
    cout << ans << endl;
}
int main() {
    int t, i, n, j;
    cin>>t;
    while(t!=0) {
        cin>>n;
        vector<int> f;
        for(i=0; i<n; i++) {
            cin>>j;
            f.push_back(j);
        }
        calc(f);
        t--;
    }
    return 0;
}
