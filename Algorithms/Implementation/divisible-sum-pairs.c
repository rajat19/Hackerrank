#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k;int count;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&a[i]);
    }
    for(int i = 0; i < n-1; i++){
       for(int j = i+1; j < n; j++){
           if((a[i]+a[j])%k==0)
               count++;
       }
    }
    printf("%d",count);
    return 0;
}

