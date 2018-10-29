/*
    Problem link : https://www.hackerrank.com/challenges/c-tutorial-functions/problem
    Problem Name : Functions | HackerRank
*/

#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a, int b, int c, int d) {
    if (a>b && a>c && a>d) return a;
    if (a<b && b>c && b>d) return b;
    if (c>b && a<c && c>d) return c;
    return d;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
