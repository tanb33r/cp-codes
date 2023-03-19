#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              {cout<<(#x)<<endl;return;}
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0)
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int G;
char a[55][55];
int vis[55][55];
using namespace std;

int n,m;

void dfs(int i, int j) {
    vis[i][j] = 1;
    int tx, ty;
    f(ii,4) {
        tx = i + dx[ii];
        ty = j + dy[ii];

        if(tx>0 && tx<=n && ty>0 && ty<=m and !vis[tx][ty] && a[tx][ty]!='#') {
            if(a[tx][ty]=='G') G++;
            dfs(tx,ty);
        }
    }
}
void print() {

    f(i,n+2) {
        f(j,m+2)
        cout<<a[i][j];
        newl;
    }

}
void solve() {
    int g=0,b=0;
    cin>>n>>m;

    f(i,n+2)    f(j,m+2)
    a[i][j] = '#';

    ff(i,1,n)    ff(j,1,m) {
        cin>>a[i][j];
        if(a[i][j] == 'G') g++;
        if(a[i][j] == 'B') b++;
    }

    if(!g and !b) ps(Yes);
    if(g and a[n][m] == '#') ps(No);
    if(b and !g and a[n][m] != 'B') ps(Yes);
    if(a[n][m] == 'B') ps(No);

    ff(i,1,n)    ff(j,1,m)
    if(a[i][j] == 'G') {
        f(ii,4) {
            int tx = i + dx[ii];
            int ty = j + dy[ii];
            if(a[tx][ty]  == 'B')
                ps(No);
        }
    }

    ff(i,1,n)    ff(j,1,m) {
        int tx, ty;
        if(a[i][j] == 'B')
            f(ii,4) {
            tx = i + dx[ii];
            ty = j + dy[ii];
            if(a[tx][ty]=='.')
                a[tx][ty]  = '#';
        }
    }
    if(a[n][m] == '#')  ps(No);
    memset(vis,0,sizeof(vis));
    G=0;
    dfs(n,m);
    if(G != g)
        ps(No);
    ps(Yes);
}
int main() {
    fastio;
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
