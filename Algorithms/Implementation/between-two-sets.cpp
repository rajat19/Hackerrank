#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int j, m, n, i, c = 0, flag = 0;
    cin>>m>>n;
    int a[m], b[n];
    for(i=0; i<m; i++) cin>>a[i];
    for(i=0; i<n; i++) cin>>b[i];
    sort(a, a+m); sort(b, b+n);
    for(i=a[m-1]; i<=b[0]; i+=a[m-1]) {
        flag = 0;
        for(j=0; j<m; j++) {
            if(i%a[j] != 0) {
                flag = 1; break;
            }
        }
        if(flag==0) {
            for(j=0; j<n; j++) {
                if(b[j]%i !=0) {
                    flag = 1; break;
                }
            }
        }
        if(flag == 0) {
            c++;
        }
    }
    cout<<c;
    return 0;
}

