#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int sum=0;
  int n,k,i=0,t;
  
  scanf("%d %d",&n,&k);
  int *a=malloc(sizeof( int)*n);
  while(n--){
    scanf("%d",&a[i]);
    if(i!=k)
    sum+=a[i];
    
    i++;
  } 
  sum=sum/2;  
  scanf("%d",&t);  
  int o=t-sum;
  if(t>sum)
    printf("%d",o);
  else
    printf("Bon Appetit");
  
  return 0;
}
