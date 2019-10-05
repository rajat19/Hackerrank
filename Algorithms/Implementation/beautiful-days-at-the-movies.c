#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  
  int i,j,k,m,temp,p,count=0;
  float res=0;
   scanf("%d %d %d",&i,&j,&k);
  
  m=0; 
  
  
  for(int n=i;n<=j;n++){
  m=0;
  temp=n;
  while(temp!=0){
    m=m*10;
    p=temp%10;
      
    temp=temp/10;
    m=m+p;
     
    }
    m=m-n; 
    res=(m+0.0)/k; 
    if(res==(m-temp)/k)
          count++;
  }
  
  printf("%d",count);
    return 0;
}
