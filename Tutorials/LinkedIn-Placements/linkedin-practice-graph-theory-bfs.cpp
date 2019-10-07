#include<iostream>
using namespace std;

int main() {
	int t, n, m, i, j, k, front, rare, v;
	cin>>t;
	while(t!=0) {
		cin>>n>>m;
		front = 0; rare = 0;
		int cost[n+1][n+1], qu[n+1], visit[n+1], visited[n+1], dist[n+1];
		for(i=1; i<=n;i++) {
			for(j=1; j<=n;j++) {
				cost[i][j] = 0;
			}
			qu[i] = 0;
			visit[i] = 0;
			visited[i] = 0;
			dist[i] = 0;
		}
		for(k=1;k<=m;k++) {
			cin>>i>>j;
			cost[i][j] = 1;
			cost[j][i] = 1;
		}
		cin >>v;
		int start = v;
		visited[v]=1;
		dist[v] = 0;
		k=1;
		int d = 1;
		while(k<n) {
			for(j=1;j<=n;j++) {
				if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1) {
					visit[j]=1;
					qu[rare++]=j;
					dist[j] = dist[v] + 1; 
				}
			}
			d++;
			v=qu[front++];
			k++;
			visit[v]=0; visited[v]=1;
		}
		for(i=1;i<=n;i++) {
			if(start != i) {
				int ans = dist[i]*6;
				if(ans > 0) {
					cout<<ans<<" ";
				}
				if(ans == 0) {
					cout<<-1<<" ";
				}
			}
		}
        cout<<endl;
		t--;
	}
	return 0;
}