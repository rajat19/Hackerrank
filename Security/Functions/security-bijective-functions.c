#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int flag=0,n,d,f;
    scanf("%d", &n);
    d=1;
    while(d<=n) {
        scanf("%d", &f);
        if(f!=d) {
            flag=1;
            break;
        }
        d++;
    }
    if(flag==1) printf("NO");
    else printf("YES");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
