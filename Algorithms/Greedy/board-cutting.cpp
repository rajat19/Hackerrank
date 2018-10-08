#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long pivot(long f,long l,long *a){
    long p=*(a+f),i=f+1,j=l;
    while(i<j){
        if(*(a+i)<=p){
            i++;
            continue;
        }
        if(*(a+j)>=p){
            j--;
            continue;
        }
        if(*(a+i)>p&&*(a+j)<p){
            long temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
            i++;
            j--;
        }
    }
    if(*(a+i)>p)i--;
        *(a+f)=*(a+i);
        *(a+i)=p;
    return i;
};

void quicksort(long f,long l,long *a){
    if(f==l)return;
    if(f+1==l){
        if(*(a+f)>*(a+l)){
            long t=*(a+f);
            *(a+f)=*(a+l);
            *(a+l)=t;
            return;
        }
    }
    long k=pivot(f,l,a);
    if(k-1>=f)
    quicksort(f,k-1,a);
    if(k+1<=l)
    quicksort(k+1,l,a);
};

int main() {
    long q,i;
    cin>>q;
    for(i=0;i<q;i++){
        long m,n;
        cin>>m>>n;
        long b[m-1],a[n-1],k;
        for(k=0;k<m-1;k++)cin>>b[k];
        for(k=0;k<n-1;k++)cin>>a[k];
        long cy=1,cx=1,x=n-2,y=m-2,c=0,s=1000000007;
        quicksort(0,m-2,b);
        quicksort(0,n-2,a);
        for(;;){
            if(x==-1&&y==-1)break;
            if(y==-1){
                c=c+(a[x]*cy);
                c=c%s;
                x--;
                cx++;
                continue;
            }
            if(x==-1){
                c=c+(b[y]*cx);
                c=c%s;
                y--;
                cy++;
                continue;
            }
            if(a[x]>b[y]){
                c=c+(a[x]*cy);
                c=c%s;
                x--;
                cx++;
            }
            else if(a[x]<=b[y]){
                c=c+(b[y]*cx);
                c=c%s;
                y--;
                cy++;
            }
           
        }
        cout<<c%s<<endl;
    }
    return 0;
}
