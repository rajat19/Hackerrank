#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int x;
    double y;
    string z;

    cin>>x;
    cin>>y;
    cin.ignore();
    getline(cin, z);

    cout<<i+x<<"\n";
    cout << fixed << setprecision(1) << d+y << endl;
    s.append(z);
    cout<<s;

    return 0;
}
