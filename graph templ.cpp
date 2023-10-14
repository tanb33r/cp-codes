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

const int N = 200 * 1000 + 6090;

int n, m;
vector<int> edges[N];
vector<pii> comp;
bool vis[N];

void dfs(int u) {
    vis[u] = 1;
    for(auto x:edges[u])
        if(!vis[x])
            dfs(x);
}

void solve() {
    int n,m;
    cin>>n>>m;
    int a[n];
    ll ans = 0;
    f(i,m) {
        int x = II-1,y = II-1;
        edges[x].pb(y);
        edges[y].pb(x);
    }
    f(i,n) {
        mn = 1e8, mx = -1;
        if(!vis[i]) {
            dfs(i);
            comp.pb({mn,mx});
        }
    }
    int B = -1;
    f(i,comp.size()) {
        ans += (comp[i].F <= B);
        B = max(B,comp[i].S);
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



