#include <iostream>
using namespace std;

int main() {
    int j, n, i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
    int min = -1, flag=0, d;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i] == a[j]) {
                d = j-i;
                if(flag==0) {
                    min = d;
                    flag = 1;
                }
                else min = (min<d)?min:d;
            }
        }
    }
    cout<<min;
    return 0;
}
