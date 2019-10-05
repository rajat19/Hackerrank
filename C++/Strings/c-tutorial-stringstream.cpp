#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> a;
    int b,i=2;
    char ch; 
    stringstream ss(str);
  while(ss >> b)
{
      ss>>ch;
      a.push_back(b);
}  
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
     
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "
";
    }
    return 0;
}

