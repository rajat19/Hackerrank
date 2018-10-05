#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    long int a[3],n,i,sum;
    scanf("%d",&t);
    while(t--)
    {
        a[0]=1;
        a[1]=2;
        scanf("%ld",&n);
        i=2;
        sum=0;
        while(a[(i-1)%3]<n)
        {
            a[i%3]=a[(i-1)%3]+a[(i-2)%3];
            if(a[(i-1)%3]%2==0)
            {
                sum+=a[(i-1)%3];
            }    
            i++;
        }    
        printf("%ld\n",sum);
    }    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
