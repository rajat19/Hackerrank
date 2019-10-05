#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,f=5,sum=0;
  scanf("%d",&n);
  
  while(n--){
    f=(f)/2;
    sum+=f;
    f=f*3;
  }
printf("%d",sum);
  return 0;
}
