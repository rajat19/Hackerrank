#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long int n,p3,p5,p15,ans,t;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
    p3=n/3;
    p5=n/5;
    p15=n/15;
    if(n%3==0)
    {
        p3-=1;
    }  
       if(n%5==0)
    {
        p5-=1;
    }  
         if(n%15==0)
    {
        p15-=1;
    }  
    ans=((3*((p3*(p3+1))/2)))+((5*((p5*(p5+1))/2)))-((15*((p15*(p15+1))/2)));
        printf("%ld\n",ans);                                    
    }    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}