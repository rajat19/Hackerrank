#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i, c, *a, *b;
    char s[20];
    scanf("%d", &n);
    a = (int*) malloc(n*sizeof(int));
    b = (int*) malloc(n*sizeof(int));
    memset(b, 0, 100*sizeof(int));
    for(i=0; i<n; i++) {
        scanf("%d%s", &a[i], s);
        b[a[i]]++;
    }
    c = 0;
    for(i=0; i<100; i++) {
        c += b[i];
        printf("%d ", c);
    }
    return 0;
}

