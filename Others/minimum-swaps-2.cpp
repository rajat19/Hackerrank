#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, n, cs, result = 0;
    cin>>n;
    vector<int> a(n, 0);
    vector<int> visited(n, 0);
    pair<int, int> apos[n];
    for(i=0; i<n ; i++) {
        cin>>a[i];
    }
    for(i=0; i<n; i++) {
        apos[i].first = a[i];
        apos[i].second = i;
    }
    sort(apos, apos+n);
    for(i=0; i<n; i++) {
        if (!visited[i] && apos[i].second != i) {
            cs = 0;
            j = i;
            while(!visited[j]) {
                visited[j] = 1;
                j = apos[j].second;
                cs++;
            }
            result += cs-1;
        }
    }
    cout<<result<<endl;
    return 0;
}
