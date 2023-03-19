#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  SIZE         1005
#define  vi           vector<int>
typedef long long     ll;
const int mod = INT_MAX;
using namespace std;
char c[SIZE][SIZE];
ll a[SIZE][SIZE];
int n ;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
bool valid(int x, int y) {
    return (x>=0 && x<=n && y>=0 && y<=n && c[x][y]=='.');
}
void dfs(int i, int j) {
    c[i][j] = '@';
    int tx, ty;
    f(ii,4) {
        tx = i + dx[ii];
        ty = j + dy[ii];
        if(valid(tx,ty))
            dfs(tx,ty);
    }
}
ll dp[SIZE][SIZE];
ll df(int x, int y) {
    if(x>=n || y>=n) return 0;
    if(c[x][y] == '#') return 0;
    if(x == y && y == n-1) return 1;
    if(dp[x][y] != -1) return dp[x][y];
    dp[x][y] = (df(x+1,y) + df(x,y+1))%mod;
    return dp[x][y];
}
int main() {
    cin>>n;
    f(i,n)
    f(j,n)
    cin>>c[i][j];
    memset(dp,-1,sizeof(dp));
    ll w = df(0,0);
    if(w==0) {
        dfs(0,0);
        puts((c[n-1][n-1] == '@')?"THE GAME IS A LIE":"INCONCEIVABLE");
    }
     else d(w);
}
