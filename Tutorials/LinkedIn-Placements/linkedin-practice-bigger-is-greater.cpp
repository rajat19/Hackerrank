#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t, i, j, k=-1, n;
    char s[101], temp;
    cin>>t;
    while(t!=0) {
        cin>>s;
        i=0; n=strlen(s);k=-1;
        for(i=0; i<n-1;i++) {
            if(s[i] < s[i+1]) {
                k = i;
            }
        }
        if(k==-1) {
            cout<<"no answer"<<endl;
        }
        else {
            for(i=k+1; i<n; i++) {
                if(s[i] > s[k]) {
                    j = i;
                }
            }
            temp = s[j];
            s[j] = s[k];
            s[k] = temp;
            for(i=0;i<=k;i++)
                cout<<s[i];
            for(i=n-1;i>k;i--)
                cout<<s[i];
            cout<<endl;
        }
        t--;
    }
    return 0;
}
