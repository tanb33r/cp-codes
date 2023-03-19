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
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";newl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
int n,m;
char a[55][55];
int vis[55][55];
using namespace std;

bool valid(int i,int j)
{
return (i>0 && i<n && j>0 && j<n)
}


void dfs(int i, int j) {
    vis[i][j] = 1;
    int tx, ty;
    f(ii,4) {
        tx = i + dx[ii];
        ty = j + dy[ii];

        if(tx>0 && tx<=n && ty>0 && ty<=m && !vis[tx][ty] && a[tx][ty]!='#') {
            if(a[tx][ty]=='G') G++;
            dfs(tx,ty);
        }
    }
}

void print() {
    f(i,n) {
        f(j,m)
        cout<<a[i][j];
        newl;
    }

}

void solve() {
    memset(vis,0,sizeof(vis));
    cin>>n>>m;

    f(i,n+2)
    f(j,m+2)
    a[i][j] = '#';

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
