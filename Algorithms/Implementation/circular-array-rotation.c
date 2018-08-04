#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, k, q, i=0, x, *a;
    scanf("%d%d%d", &n, &k, &q);
    a = (int *) malloc(sizeof(int) * n);
    for(i=0;i<n;i++) {
        scanf("%d", &x);
        a[(i+k)%n] = x;
    }
    for(i=0;i<q;i++) {
        scanf("%d", &x);
        printf("%d
", a[x]);
    }
    return 0;
}

