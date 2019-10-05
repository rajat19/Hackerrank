#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
  
     long long int ar[]={a,b,c,d,e};
  
      long long int min=-1,max=0,sum;
  
     for(int i=0;i<5;i++){
       sum=0;
       int j=i;
        for(int k=0;k<4;k++){
          sum+=ar[j%5];
           j++;
        }
   
        if(sum>max)
             max=sum;
       if(min==-1)
         min=sum;
        else if(sum<min)
            min=sum;
     }
  
  printf("%lld %lld",min,max);
  
    return 0;
}
