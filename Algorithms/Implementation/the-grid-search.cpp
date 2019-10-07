#include<iostream>

using namespace std;

int main()
{
int T,i;
cin>>T;
for(i=1;i<=T;i++)
{
    int R,C,r,c,flag=0,final=0;
    cin>>R>>C;
    char G[R][C];
    for(int j=0;j<R;j++)
    for(int k=0;k<C;k++)
    cin>>G[j][k];
    cin>>r>>c;
    char P[r][c];
    for(int j=0;j<r;j++)
    for(int k=0;k<c;k++)
    cin>>P[j][k];

for(int j=0;j<R;j++)
for(int k=0;k<C;k++)
{   

if(G[j][k]==P[0][0])
    {   
        int flag=1;
    if(C-k>=c)  
    for(int pr=1;pr<r;pr++)
    {
    if(flag==0)
    break;  
    for(int pc=0;pc<c;pc++)
    {   

        if(G[j+pr][k+pc]==P[pr][pc]){
            if(pr==r-1&&pc==c-1)
                final=1;
            flag=1;
            }
        else{   
        flag=0;
        break;
        }
    }
}
}
}
if(final)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}