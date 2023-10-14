#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
const int N = 2e5+5;
using namespace std;
typedef pair<int,int> pii;
char a[2][N];
bool vis[2][N];
ll m;
ll cnt=0,ctb=0;
void dfs(int x,int y) {
    cnt++;
    vis[x][y] = 1;
    if(!vis[x^1][y] and a[x^1][y]=='B')
        dfs(x^1,y);
    else if(y+1<m and !vis[x][y+1] and a[x][y+1]=='B')
        dfs(x,y+1);

}
void solve() {
    cin>>m;
    cnt = ctb=0;
    f(i,2) f(j,m) {
        vis[i][j]=0;
        cin>>a[i][j];
        ctb += a[i][j]=='B';
    }
    bool ans = 1;
    if(a[0][0]=='B') {
        dfs(0,0);
        if(cnt == ctb)
            return void(ps(YES));
    }
    cnt=0;
    f(i,2) f(j,m) vis[i][j]=0;

    if(a[1][0]=='B') {
        dfs(1,0);
        if(cnt == ctb)
            return void(ps(YES));
    }
    ps(NO);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


