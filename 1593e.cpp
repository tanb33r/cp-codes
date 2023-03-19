#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            cerr<<(#v)<<" = ";for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
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
const ll MAX = 4e5+5;
vector<int>g[MAX],pata;
int c[MAX],vis[MAX],dis[MAX];

void dfs(int u) {
    vis[u]=1;
    if(g[u].size()==1)pata.pb(u);
    for(auto x:g[u]) if(!vis[x]) dfs(x);
}

void solve() {
    int n,k;
    cin>>n>>k;
     pata.clear();
    f(i,n+3) {
        c[i]=vis[i]=dis[i]=0;
        g[i].clear();
    }


    f(i,n-1) {
        int x = II, y = II;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(1);
    ff(i,1,n+1)c[i]=g[i].size();
//    vout(pata);
    queue<pii>q;

    f(i,pata.size())q.push({pata[i],1});

    int m = 0 ;
    while(!q.empty()) {
        auto u = q.front();
        dis[u.F]=u.S;
        if(++m==n)break;
        q.pop();
        for(auto x:g[u.F])
            if(--c[x]==1)  q.push({x,u.S+1});
    }

    int ans=0;
    ff(i,1,n+1)ans+=(dis[i]<=k);
    pr(n-ans);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
