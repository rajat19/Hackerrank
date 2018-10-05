#include <bits/stdc++.h>
using namespace std;
vector<int > adj[110];
int level[110];


int bfs( int start)
{
    level[start] = 0;
   queue<int> q;    
   q.push(start);
   
   while (!q.empty())   
    {
       int ne= q.front();
       auto  itr = adj[ne].begin();
       while (itr != adj[ne].end()) {
            if (level[*itr] == -1) {           
                level[*itr] = level[ne] + 1;    if(*itr==100) return level[100]; 
                    q.push(*itr);    
            }
            ++itr;
        }
        q.pop();
     }
    return level[100];
   }
int main() {
    int t;cin>>t;int f[110];
    while(t--)
        {
         
        
      for(int i=0;i<110;++i)
    {adj[i].clear();level[i]=-1;f[i]=i;}
          
         int a,b; int n;cin>>n;
        for(int i=0;i<n;++i)
            {
            cin>>a>>b;
            f[a]=b;
        }
        int m;cin>>m;
        for(int i=0;i<m;++i)
            {
            cin>>a>>b;
             f[a]=b;
            
        }
        //cout<<f[79];
        
         for(int i=1;i<=100;++i)
     {
             adj[i].push_back(f[i+1]);
             adj[i].push_back(f[i+2]);
             adj[i].push_back(f[i+3]);
             adj[i].push_back(f[i+4]);
             adj[i].push_back(f[i+5]);
             adj[i].push_back(f[i+6]);
             }
          cout<<bfs(1)<<endl;
    }
    return 0;
}

