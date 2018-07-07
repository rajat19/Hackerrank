#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i, j;
    for(i=0; i<n; i++) {
        for(j=i; j<n-1; j++) cout<<" ";
        for(j=0; j<i+1; j++) cout<<"#";
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
