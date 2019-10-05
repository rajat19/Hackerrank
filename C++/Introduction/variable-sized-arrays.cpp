int n,q,n1,i,f,s;
cin>>n >>q;
int a[n][100000];

for(int j=0;j<n;j++){
  cin>>n1;
   
  for(i=0;i<n1;i++)
    cin>>a[j][i];
   
}
 
while(q--){
  cin>>f>>s;
   
  cout<<a[f][s]<<endl;
}
	return 0;
}
