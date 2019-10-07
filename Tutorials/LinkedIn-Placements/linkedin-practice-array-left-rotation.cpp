#include <iostream>
using namespace std;

int main() {
    int n, i, d;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cout<<a[(i+d)%n]<<" ";
    return 0;
}
