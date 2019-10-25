#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp=0,f[1000],k=0,count=0;
    cin>>n;
    int a[1000],b[1000];
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    for(j=0;j<n;j++)
        {
            cin>>b[j];
        }
      for(i=0;i<n;i++)

        {
            temp=a[i];
            a[i]=-1;
            for(j=0;j<n;j++)
        {
             if(temp==b[j])
             {
                 f[k++]=temp;
                 count++;
                 b[j]=-1;


                  break;
             }



    }
    temp=0;
    }
             for(int l=0;l<count;l++)
            {

                for(i=0;i<count-1-l;i++)
                {
                    if(f[i]>f[i+1]){
                    int tem=f[i];
                    f[i]=f[i+1];
                    f[i+1]=tem;}

                }

                    }
            for(int i=0;i<count;i++)
        {
                 if (i==0)
                 {
                     cout<<"[";
                 }
                cout<<f[i];

               if(i<count-1)
                cout<<", ";
                if(i==count-1)
                {
                    cout<<"]";
                }



}
}
