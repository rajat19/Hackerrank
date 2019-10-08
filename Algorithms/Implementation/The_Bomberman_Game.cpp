/*
For explanation you can visit: https://www.youtube.com/watch?v=Y8TSIZkQJsk
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int A[202][202], B[202][202];
char S[202][202];

int main() {
    
    int R, C, N;
    cin >> R >> C >> N;
    
    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++)
            scanf(" %c", &S[i][j]);
    
    if(N==1)
    {
        for(int i=1; i<=R; i++)
        {
            for(int j=1; j<=C; j++)
                cout << S[i][j];
            cout << endl;
        }
        return 0;
    }
        
    if(N%2==0)
    {
        for(int i=1; i<=R; i++)
        {
            for(int j=1; j<=C; j++)
                cout << 'O';
            cout << endl;
        }
        return 0;
    }
    
    for(int i=1; i<=R; i++)
        {
            for(int j=1; j<=C; j++)
                if(S[i][j]=='O')
                    A[i][j] = A[i+1][j] = A[i][j+1] = A[i-1][j] = A[i][j-1] = 1;
        }
    
    for(int i=1; i<=R; i++)
        {
            for(int j=1; j<=C; j++)
                if(A[i][j]==0)
                    B[i][j] = B[i+1][j] = B[i][j+1] = B[i-1][j] = B[i][j-1] = 1;
        }
    
    if(N%4==3) // 3 7 11 ...
    {
        for(int i=1; i<=R; i++)
        {
            for(int j=1; j<=C; j++)
            {
                if(A[i][j])
                    cout << '.';
                else
                    cout << "O";
            }
            cout << endl;
        }
    }
    
    if(N%4==1) // 5 9 13 ...
    {
        for(int i=1; i<=R; i++)
        {
            for(int j=1; j<=C; j++)
            {
                if(B[i][j])
                    cout << '.';
                else
                    cout << "O";
            }
            cout << endl;
        }
    }
    
    return 0;
}
