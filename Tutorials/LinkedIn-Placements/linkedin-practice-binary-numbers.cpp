#include <iostream>
using namespace std;

int todec(int n) {
    static int max = 0;
    static int tot = 0;
    if(tot>max) max= tot;
    int a = max, b = tot;
//    cout<<n<<" "<<a<<" "<<b<<endl;
    if(n==0) {
        return max;
    }
    else {
        if(n%2==0)
            tot = 0;
        else tot++;
        return todec(n/2);
    }
}

int main() {
    int n;
    cin>>n;
    int ans = todec(n);
    cout<<ans;
    return 0;
}
