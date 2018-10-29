/*
  Problem link : https://www.hackerrank.com/challenges/c-tutorial-strings/problem
  Problem Name : Strings | HackerRank
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    // Complete the program
    string s1, s2;
    cin >> s1;
    cin >> s2;
    cout << s1.size() << " " << s2.size() << "\n";
    cout << s1 + s2 << "\n";
    char tmp = s1[0];
    s1[0] = s2[0];
    s2[0] = tmp;
    cout << s1 << " " << s2;
    return 0;
}
