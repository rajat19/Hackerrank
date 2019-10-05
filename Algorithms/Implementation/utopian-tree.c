#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,e; 
    scanf("%d",&t);
  
    for(int a = 0; a < t; a++){
        int n; 
        scanf("%d",&n);
      e=1;
      for(int i=1;i<=n;i++){
        if(i%2!=0)
          e=e*2;
        else
          e+=1;
      }
      printf("%d\n",e);
    }
    return 0;
}
