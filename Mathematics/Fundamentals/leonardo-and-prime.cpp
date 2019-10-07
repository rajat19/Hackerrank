#include <iostream>
using namespace std;
//CHECKS FOR NUMBER IS PRIME
bool is_prime(long long int k )
{
	bool flag=1;
	if(k==0||k==1)
		return 0;
	else
	{
		for (long long int i = 2; i<k; ++i)
		{
			if(k%i==0)
			{
			flag=0;
			return 0;
			}
		}
	}
	if(flag)
	return 1;
	else
	return 0;	
} 
// DISPLAY COUNT AND FIND THE PRIME FACTOR PRODUCT
void factor(long long int k)
{
    int count=0;
    unsigned long long int pro=1;//product
    if(k!=1)     
    {
    for(long long int i=2;i<=k&&pro<k&&pro>0;i++)
	{
	if(is_prime(i))
	{
        pro*=i;
        if(pro<=k)
        count++;
	}
	}
    }
	cout<<count;
}
int main()
{
	long long int T;
	long long int N;
	cin>>T;
	for (long long int i = 0; i < T; ++i)
	{
		cin>>N;
		factor(N);
        cout<<endl;
	}
	return 0;
}