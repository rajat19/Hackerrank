#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int a[n][n];
  
  int s1=0,s0=0;
    for(int  i = 0; i < n;  i++){
       for(int  j = 0;  j < n;  j++){
          
          scanf("%d",&a[ i][ j]);
         if(i==j)
           s0+=a[i][j];
         if(i+j == n-1)
           s1+=a[i][j];
       }
    }
  
  int res=s1-s0;
  if(res<0)
    res*=-1;
  printf("%d",res);
    return 0;
}
