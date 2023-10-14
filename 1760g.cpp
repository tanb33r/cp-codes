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
const int N = 1e5+10;
vector<pair<ll,ll>>g[N];
vector<int>xors;
int a, b, n;
bool vis[N];
bool vis2[N];
int X = 0;
bool ans = 0;
void Clear() {
    ans = 0;
    xors.clear();
    f(i,N) {
        g[i].clear();
        vis[i] = vis2[i] = 0;
    }
}
void dfs2(int v,int xr) {
    if(v!=b) ans |= binary_search(all(xors), xr);
    vis2[v] = 1;
    for(auto e:g[v]) if(!vis2[e.F]) dfs2(e.F, xr^e.S);
}

void dfs(int v, int xr) {
    xors.pb(xr);
    vis[v] = 1;
    for(auto e:g[v]) if(!vis[e.F] and e.F != b) dfs(e.F, xr^e.S);
}

void solve() {
    Clear();
    cin>>n>>a>>b;
    f(i,n-1) {
        int x = II,y = II, w = II;
        g[x].pb({y,w});
        g[y].pb({x,w});
    }
    dfs(a,0);
    sort(all(xors));
    dfs2(b,0);
    hmm(ans);


}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


