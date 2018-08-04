#include <iostream>
using namespace std;

int main() {
    int t, n, i, k, p, temp, flag=0;
    cin>>t;
    while(t!=0) {
        cin>>n>>k;
        p = n - k;
        flag=0;
        for(i=1;i<=n;i++) {
            temp = (p+i)%n;
            if(temp==0) temp = n;
            if((i-temp)!=k && (temp-i)!=k) {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<-1<<endl;
        else {
            for(i=1;i<=n;i++) {
                temp = (p+i)%n;
                if(temp==0) temp = n;
                cout<<temp<<" ";
            }
            cout<<endl;
        }
        t--;
    }
    return 0;
}

