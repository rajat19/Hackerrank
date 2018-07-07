#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum_dig(int n) {
    if(n == 0) return 0;
    return ((n%10) + sum_dig(int(n/10)));
}

int main() {
    int n, i, sod, max = 0, mp = 0, t;
    cin>>n;
    for(i=1; i<=int(sqrt(n)); i++) {
        if(n%i == 0) {
            sod = sum_dig(i);
            if(sod > max) {
                max = sod;
                mp = i;
            }
            else if(sod == max && i < mp) {
                mp = i;
            }
        }
        if(i*i !=n) {
            t = int(n / i);
            if(i*t == n) {
                sod = sum_dig(t);
                if(sod > max) {
                    max = sod;
                    mp = t;
                }
                else if(sod == max && t < mp) {
                    mp = t;
                }
            }            
        }
    }
    cout<<mp;
    return 0;
}
