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

const int N = 200 * 1000 + 11;

int n, m;
vector<int> g[N];
vector<pair<int, int>> e;

bool bip;
vector<int> color;

void dfs(int v,int c) {
    color[v] = c;
    for(auto x: g[v])
        if(color[x] == -1)
            dfs(x,c^1);
        else if(color[x] == color[v])
            bip = 0;
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        g[x].push_back(y);
        g[y].push_back(x);
        e.push_back(make_pair(x, y));
    }
    bip = 1;
    color = vector<int>(n, -1);
    dfs(0,0);
    if(!bip) return void(ps(NO));
    ps(YES);
    f(i,m) cout<<(color[e[i].F] < color[e[i].S]);
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

