#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long getDivisor(long long a[], long long n) { 
    
    if (n == 1) 
        return (a[0] + 1);   
    long long prefix[n], suffix[n];   
    
    prefix[0] = a[0]; 
    for (long long i = 1; i < n; i++)  
         prefix[i] = __gcd(a[i], prefix[i - 1]);    
  
    
    suffix[n-1] = a[n-1]; 
    for (long long i = n - 2; i >= 0; i--)  
         suffix[i] = __gcd(suffix[i + 1], a[i]);    
      
    for (long long i = 0; i <= n; i++) {   
        long long t = 0;          
        if (i == 0) 
            t = suffix[i + 1]; 
        else if (i == n - 1) 
            t = prefix[i - 1]; 
        else
            t = __gcd(prefix[i - 1], suffix[i + 1]);   
        
        if (a[i] % t != 0) 
            return t; 
    } 
  
    return 0LL; 
} 


int main(){
    long long n = 1;
    cin >> n;
    long long a[n];
    for(long long i=0;i<n;i++) cin >> a[i];

    cout << getDivisor(a,n) << '\n';
    return 0;
}