#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, i;
    long long sum=0, *ar;
    cin>>n;
    ar = (long long*) malloc(n*sizeof(long long));
    for(i=0; i<n; i++) {
        cin>>ar[i];
        sum+=ar[i];
    }
    cout<<sum;
    return 0;
}