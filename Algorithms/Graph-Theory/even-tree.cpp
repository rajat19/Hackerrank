#include<iostream>
#include<bits/stdc++.h>
// iteration and input/output stream
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define srep(i, begin, end) for (__typeof(end) i = begin; i != end; i++)
#define printarr(x) rep(i,0,x.size()) cout<<x[i]<<" "; cout<<endl;

#define si(x) int x; scanf("%d", &x)
#define sll(x) ll x; scanf("%lld", &x)
#define pi(x) printf("%d", x)
#define pll(x) printf("%lld", x)
#define nl prinf("\n")
#define tr(cont,it) \
for(decltype(cont.begin()) it = cont.begin(); it!= cont.end() ; it++)

#define tc() int tcase; cin >> tcase ; rep(tc,1,tcase+1)
//STL shortcuts
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define F first
#define S second
#define MP make_pair

// Error detection
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

using namespace std;

typedef long long int ll; // 64 bit integer
typedef unsigned long long int  ull; // 64 bit unsigned integer
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<int,ll> pill;

inline void smax(int &x , int y) { x = max(x , y) ; }
inline void smin(int &x , int y) { x = min(x , y) ; }

#define MOD 1000000007
#define inf 4000000000000000000LL
#define SYNC std::ios::sync_with_stdio(false);  cin.tie(NULL);

ll gcd(ll a,ll b){ return ((b==0)? a:gcd(b,a%b) ); }

vector<vi> gr;
vi vis,siz;
int n,cnt=0;

void dfs(int s)
{
    vis[s]=1;
    siz[s] =1;

    rep(i,0,gr[s].size())
    {
        int x = gr[s][i];
        if(!vis[x])
        {
            dfs(x);
            if(siz[x]%2==0 && siz[x]>0)
            {
                siz[x] = 0;
                cnt++;
            }
            siz[s] += siz[x];
        }
    }
}

int main()
{
    SYNC
    int n,m;
    cin>>n>>m;
    gr.resize(n+1,vi(0));
    vis.resize(n+1);
    siz.resize(n+1,0);
    rep(i,0,n-1)
    {
        int x,y;
        cin>>x>>y;
        gr[x].pb(y);
        gr[y].pb(x);
    }
    dfs(1);
    if(n%2==1)
    {
        cout<<"-1"<<endl;
    }
    else
        cout<<cnt<<endl;
}
