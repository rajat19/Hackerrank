#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int n, i, sum = 0, *ar;
    cin>>n;
    ar = (int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++) {
        cin>>ar[i];
        sum+=ar[i];
    }
    cout<<sum;
    return 0;
}