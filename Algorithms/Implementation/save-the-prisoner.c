#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,t,m,s,ans;
    scanf("%ld", &t);
    while(t>0) {
        scanf("%ld%ld%ld",&n,&m,&s);
        ans = (m+s-1)%n;
        if(ans == 0)
            ans = n;
        printf("%ld\n",ans);
        t--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
