#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, n, d, i, cnt = 0, flag = 0; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;
        scanf("%d",&n);
        d = n % 3;
        if(d == 0)
            cnt = n;
        else {
            for(i = n; i >= 0; i--) {
                if(i % 3 == 0 && (n-i) % 5 == 0) {
                    cnt = i;
                    break;
                }
            }
        }
        if(n==1 || n==2 || n==4 || n==7 )
            printf("-1");
        else {
            for(i = 0; i < cnt; i++) {
                printf("5");
            }
            for(i = cnt; i < n; i++) {
                printf("3");
            }
        }
        printf("
");
    }
    return 0;
}

