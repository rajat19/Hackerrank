#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;
bool mt(int x, int y, int n) {
	if(y+1 < n+1)return true;
	return false;
}
bool mr(int x, int y, int n) {
	if(x+1 < n+1) return true;
	return false;
}
bool mb(int x, int y, int n) {
	if(y-1 > 0) return true;
	return false;
}
bool ml(int x, int y, int n) {
	if(x-1 > 0) return true;
	return false;
}

int main(){
	int n, k, i, qx, qy, x, y, count = 0, c = 0;
	vector<vector<int>> v;
	cin>>n>>k;
	cin>>qx>>qy;
	v.resize(n+1, vector<int>(n+1, 0));
	for(i=0; i<k; i++) {
		cin>>x>>y;
		v[x][y] = 1;
	}
	x = qx; y = qy; c= 0;
	while(mt(x, y, n) && v[x][y+1] == 0) {
		y++;
		c++;
	}
	count += c;
	// cout<<"top: "<<c<<endl;
	x = qx; y = qy; c= 0;
	while(mt(x, y, n) && mr(x, y, n) && v[x+1][y+1] == 0) {
		x++; y++;
		c++;
	}
	count += c;
	// cout<<"top right: "<<c<<endl;
	x = qx; y = qy; c= 0;
	while(mb(x, y, n) && v[x][y-1] == 0) {
		y--;
		c++;
	}
	count += c;
	// cout<<"bottom: "<<c<<endl;
	x = qx; y = qy; c= 0;
	while(mb(x, y, n) && mr(x, y, n) && v[x+1][y-1] == 0) {
		x++; y--;
		c++;
	}
	count += c;
	// cout<<"bottom right: "<<c<<endl;
	x = qx; y = qy; c= 0;
	while(mr(x, y, n) && v[x+1][y] == 0) {
		x++;
		c++;
	}
	count += c;
	// cout<<"right: "<<c<<endl;
	x = qx; y = qy; c= 0;
	while(mt(x, y, n) && ml(x, y, n) && v[x-1][y+1] == 0) {
		x--; y++;
		c++;
	}
	count += c;
	// cout<<"top left: "<<c<<endl;
	x = qx; y = qy; c= 0;
	while(ml(x, y, n) && v[x-1][y] == 0) {
		x--;
		c++;
	}
	count += c;
	// cout<<"left: "<<c<<endl;
	x = qx; y = qy; c= 0;
	while(mb(x, y, n) && ml(x, y, n) && v[x-1][y-1] == 0) {
		x--; y--;
		c++;
	}
	count += c;
	// cout<<"bottom left: "<<c<<endl;
	cout<<count;
	return 0;
}
