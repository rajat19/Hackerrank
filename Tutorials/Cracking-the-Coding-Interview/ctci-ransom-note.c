#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int search(char **,char **,int);
int main(){
    int m; 
    int n,k=0; 
    scanf("%d %d",&m,&n);
    char* *magazine = malloc(sizeof(char*) * m);
    for(int magazine_i = 0; magazine_i < m; magazine_i++){
       magazine[magazine_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",magazine[magazine_i]);
    }
    char* *ransom = malloc(sizeof(char*) * n);
    for(int ransom_i = 0; ransom_i < n; ransom_i++){
       ransom[ransom_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",ransom[ransom_i]);
      k=search(&ransom[ransom_i],magazine,m);
      if(k!=1){
        printf("No");
        
        k=-1;
        break;
      }
      
    }
  
   
  if(k!=-1)
  printf("Yes");
    return 0;
}

int search(char ** word,char ** magazine,int m){
  
  char* p="null";
    
    for(int i=0;i<m;i++)
      if(**word==*magazine[i]){
       magazine[i]=(char*)&p;
        return 1;
    }
 
        
  return 0;
}
