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
    int arr[n];
  int s=1001,s1=1001;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
      if(s>arr[arr_i])
        s=arr[arr_i];
    }
  int u=n;
    printf("%d  \n",n );
  while(s<1001){
    s1=1001;
    for(int i=0;i<n;i++){
      if(arr[i]>0){
         arr[i]-=s;
        if(arr[i]==0)
          u--;
      if(arr[i]<s1 && arr[i]!=0)
        s1=arr[i];
      }
        
      
    }
    if(u>0)
    printf("%d\n",u);
    s=s1;
  }
    return 0;
}
