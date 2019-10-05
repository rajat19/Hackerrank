#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct node{
   int c,count;
   struct node *next;
 }node;

int main(){
    int n; 
  node *head ,*craul,*link;
  head=NULL;
  link=NULL;
  craul=NULL;
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    int *b = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
      if(head==NULL){
        head=(node *)malloc(sizeof(node));
        head->c=c[c_i];
        head->count=1;
        head->next=NULL;
      }else{
        craul=head;
        while(craul->c!=c[c_i] && craul->next!=NULL )
          craul=craul->next;
        
        if(craul->next==NULL){
          if(craul->c!=c[c_i]){
            
          link=(node *)malloc(sizeof(node));
          link->c=c[c_i];
          link->count=1;
          link->next=NULL;
          craul->next=link;
          }else{
            craul->count+=1;
          }
        }else{
          craul->count+=1;
        }
      }
    }
  craul=head;
  int p=0;
  while(craul!=NULL){
    p+=(craul->count)/2;
    
     craul=craul->next;
  }
  printf("%d",p);
    return 0;
}
