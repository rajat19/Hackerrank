#include<stdio.h>
#include<string.h>
void next_move(int posr, int posc, char board[5][5])
{
   int dimh = 5;
   int dimw = 5;
       int i,j;
       if(board[posr][posc] == 'd')
       {
              printf("CLEAN\n");
       }
       else
       {
              for(i=0;i<dimh;i++)
              {
                     for(j=0;j<dimw;j++)
                     {
                           if(board[i][j] == 'd')
                           {
                                  //printf("%d %d\n",i,j);
                                  if(posc>j)
                                  {
                                         printf("LEFT\n");
                                  }
                                  else if(posc<j)
                                  {
                                         printf("RIGHT\n");
                                  }
                                  else
                                  {
                                         if(posr>i)
                                         {
                                                printf("UP\n");
                                         }
                                         else if(posr<i)
                                         {
                                                printf("DOWN\n");
                                         }     
                                         else
                                         {
                                                printf("CLEAN\n");
                                         }
                                  }
                                  return;
                           }
                     }
              }
       }
}
int main(void) {
    int pos[2], i;
    char board[5][5], line[6];
    scanf("%d", &pos[0]);
    scanf("%d", &pos[1]);
    for(i=0; i<5; i++) {
        scanf("%s[^\\n]%*c", line);
        strncpy(board[i], line, 5);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
