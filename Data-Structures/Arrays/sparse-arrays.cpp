#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,Q,i,j;
    scanf("%d",&N);
    char strs[N][100];
    for(i=0;i<N;i++)
    {
        scanf("%s",strs[i]);
    }
    scanf("%d",&Q);
    char que[Q][100];
    int cnt[Q];
    for(i=0;i<Q;i++)
    {
        scanf("%s",que[i]);
        cnt[i]=0;
    }
    for(i=0;i<Q;i++)
    {
        for(j=0;j<N;j++)
        {
            if(strcmp(que[i],strs[j])==0)
            {
                cnt[i]++;
            }
        }
    }
    for(i=0;i<Q;i++)
    {
        printf("%d\n",cnt[i]);
    }
    
    return 0;
    
}
