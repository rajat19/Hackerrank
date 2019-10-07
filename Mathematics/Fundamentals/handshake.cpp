#include <iostream>
using namespace std;
long long fac(int n) {
    if(n==1 || n==0)
        return n;
    else return (n* fac(n-1));
}

int main(){
    long t, n;
    long long ans;
    cin>>t;
    while(t--) {
        cin>>n;
        ans = n*(n-1)/2;
        cout<<ans<<endl;
    }
    return 0;
}
