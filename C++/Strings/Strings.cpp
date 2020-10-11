#include <iostream>
#include <string>
using namespace std;

int main() 
{
string str1,str2,str3,tmpstr;
int a,b;

cin >> str1;
cin >> str2;

 a = str1.size();
 b = str2.size();

tmpstr = str3 = str1+str2;

char tmpa,tmpb;

tmpa = str3[0];
tmpb = str3[a];

str3[0] = tmpb;
str3[a] = tmpa;

cout << a << " " << b << endl;

cout << tmpstr << endl;

for(int i = 0; i < a;i++)
 cout << str3[i];
      cout << " ";
 for(int i = a; i < str3.size(); i++)
  cout << str3[i];
     cout << endl;
  return 0;
}
