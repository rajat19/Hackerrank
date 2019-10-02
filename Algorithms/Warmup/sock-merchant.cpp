#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,i,c=0;    
    cin>>a;
    int b[a];
    for(i=0;i<a;i++)
        cin>>b[i];
    sort(b,b+a);
    for(i=0;i<a-1;)
    {
        if(b[i]==b[i+1])    
        {
            c++;
            i+=2;
        }
        else
            i++;
    }
    cout<<c;
    return 0;
}
