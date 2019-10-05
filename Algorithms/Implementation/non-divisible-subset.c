#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


  int n,k,count=0;
  scanf("%d %d",&n ,&k);
  int *p=malloc(n*sizeof(int));
  for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
    
  }
  
  for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
     if((p[i]+p[j])%k !=0)
       count++;
    
  }
    
  }
  
  printf("%d",count);
  return 0;
}
