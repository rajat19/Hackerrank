#include<stdio.h>
#include<string.h>
void next_move(int posr, int posc, char board[5][5])
{
   int dimh = 5;
   int dimw = 5;
       int i,j;
       if(board[posr][posc] == 'd')
       {
              printf("CLEAN
");
       }
       else
       {
              for(i=0;i<dimh;i++)
              {
                     for(j=0;j<dimw;j++)
                     {
                           if(board[i][j] == 'd')
                           {
                                  //printf("%d %d
",i,j);
                                  if(posc>j)
                                  {
                                         printf("LEFT
");
                                  }
                                  else if(posc<j)
                                  {
                                         printf("RIGHT
");
                                  }
                                  else
                                  {
                                         if(posr>i)
                                         {
                                                printf("UP
");
                                         }
                                         else if(posr<i)
                                         {
                                                printf("DOWN
");
                                         }     
                                         else
                                         {
                                                printf("CLEAN
");
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
        scanf("%s[^\
]%*c", line);
        strncpy(board[i], line, 5);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}

