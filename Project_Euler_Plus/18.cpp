#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a ,int b)
{
    if(a>b)
    {
        return a;
    }    
    else
    {
        return b;
    }    
}    
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int**a=(int**)malloc(n*sizeof(int*));
        int i;
        for(i=0;i<n;i++)
        {
            a[i]=(int*)malloc(n*sizeof(int));    
        }
        int j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                scanf("%d",&a[i][j]);
            }    
        } 
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<=i;j++)
            {
                a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
            }    
        }   
        printf("%d\n",a[0][0]);
    }    
    return 0;
}