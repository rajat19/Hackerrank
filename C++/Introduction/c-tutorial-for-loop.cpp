#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    vector<string> arr;
    arr.push_back("zero");
    arr.push_back("one");
    arr.push_back("two");
    arr.push_back("three");
    arr.push_back("four");
    arr.push_back("five");
    arr.push_back("six");
    arr.push_back("seven");
    arr.push_back("eight");
    arr.push_back("nine");
    int a, b;
    cin >> a >> b;
    for(int i = a;i<=b;i++){
        if(i > 9){
            if(i % 2 == 0) cout << "even" << endl;
            else cout << "odd" << endl;
        }
        else cout << arr[i] << endl;
    }
    return 0;
} 
