#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,i,j,t, an,temp=0;
    cin>>t;
    while(t!=0) {
        temp=0;
        cin>>n>>k;
        for(i=1;i<n;i++) {
            for(j=i+1;j<=n;j++) {
                an = i&j;
                if(an>temp && an<k) {
                    temp = an;
                }
            }
        }
        t--;
        cout<<temp<<endl;
    }
    return 0;
}

