// https://www.hackerrank.com/challenges/sum-vs-xor/problem
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    long n;
    cin >> n;
    long c,count=0;
while(n){
    if(n%2==0)
        count++;
     n=n/2; 
}
c=pow(2,count);
    cout << c;
    return 0;
}
