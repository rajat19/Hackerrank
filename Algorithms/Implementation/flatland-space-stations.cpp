#include <iostream>
using namespace std;

int main() {
    int n,m,i;
    cin>>n>>m;
    int c[m];
    for(i=0;i<m;i++) {
        cin>>c[i];
    }
    if(n==m) cout<<0;
    else {
        int mmx = 0,j;
        for(i=0;i<n;i++) {
            int mx = 0;
            for(j=0;j<m;j++) {
                int dif = (i>c[j])?(i-c[j]):(c[j]-i);
                if(j==0) mx = dif;
                else mx = (dif<mx)?dif:mx;
            }
            if(i==0) mmx = mx;
            else mmx = (mmx>mx)?mmx:mx;
        }
        cout<<mmx;
    }
    return 0;
}
