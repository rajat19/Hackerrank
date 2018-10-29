/*
  Problem link: https://www.hackerrank.com/challenges/arrays-introduction/problem
  Problem Name: Arrays Introduction | HackerRank
*/

#include <iostream>

using namespace std;

int main(void)
{
    int N, arr[1000], cpy[1000], i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    i--;
    for (int j = i; j >= 0; j--)
    {
        cout << arr[j] << "\t";
    }
    return 0;
}
