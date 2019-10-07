#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }
        int i=0, j=0, c=0;
        while(x>0 && i<n && j<m) {
            if(a[i] < b[j]) {
                x-=a[i];
                i++; c++;
            }
            else {
                x-=b[j];
                j++; c++;
            }
        }
        while(x>0 && i<n) {
            x-=a[i];
            i++; c++;
        }
        while(x>0 && i<n) {
            x-=a[i];
            i++; c++;
        }
        cout<<c-1;
    }
    return 0;
}
