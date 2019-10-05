#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int m; 
    scanf("%d",&m);
    int arr[m];
  int p=0,n=0,z=0;
    for(int arr_i = 0; arr_i < m; arr_i++){
       scanf("%d",&arr[arr_i]);
      if(arr[arr_i]>0)
        p++;
      if(arr[arr_i]<0)
        n++;
      if(arr[arr_i]==0)
        z++;
    }
  float c=m+0.0;
  float pr=p/c;
  float nr=n/c;
  float zr=z/c;
  printf("%f\n",pr);
  printf("%f\n",nr);
  printf("%f",zr);
    return 0;
}
