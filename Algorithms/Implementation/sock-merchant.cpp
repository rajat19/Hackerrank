#include <iostream>
using namespace std;

int main() {
    int n, i, count=0,j;
    cin>>n;
    int a[n], pt[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        pt[i] = 0;
    }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(pt[i]==0 && pt[j]==0) {
                if(a[i] == a[j]) {
                    pt[i] = 1;
                    pt[j] = 1;
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
