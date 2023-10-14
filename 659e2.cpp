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
using namespace std;
typedef pair<int,int> pii;
vector<vector<int>> v;
int flag;
int vis[100010]= {0};

void dfs(int x,int p) {
    int i;
    if(vis[x]) {
        flag=0;
        return ;
    }
    vis[x]=1;
    for(i=0; i<v[x].size(); i++) {
        if(v[x][i]==p)continue;
        dfs(v[x][i],x);
    }
}
void solve() {
    int n,i,m,x,y;
    int ans=0;
    v.clear();
    cin>>n>>m;
    v.resize(n+10);
    while(m--) {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(i=1; i<=n; i++) {
        flag=1;
        dfs(i,-1);
        ans+=flag;
    }
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
