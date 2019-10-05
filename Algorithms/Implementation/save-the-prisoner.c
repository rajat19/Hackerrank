#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
  int t,n,m,s;
  scanf("%d",&t);
  while(t--){
      scanf("%d %d %d",&n,&m,&s);
    
    printf("%d",(s+m-1)%n);
  }
    return 0;
}
