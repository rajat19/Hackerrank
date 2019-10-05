#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  int n=26;
    int *h = malloc(sizeof(int) * n);
    for(int h_i = 0; h_i < n; h_i++) 
       scanf("%d",&h[h_i]);
    
    char* word = (char *)malloc(512000 * sizeof(char));
  
    scanf("%s",word);
  char ch;
  int max=0;
  int i=0;int j=0;
     while((ch=*(word+i))!='\0'){
        j=ch-'a';
       if(*(h+j)>max)
         max=*(h+j);
      
       i++;
     }
  printf("%d",max*i);
    return 0;
}
