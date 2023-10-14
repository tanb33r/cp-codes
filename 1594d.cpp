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
vector<vector<pii>> g;
vector<pii> e;
int c[2];
bool bip;
vector<int> color;
void dfs(int i) {
    c[color[i]] += (i<=n);

    for(auto x: g[i])
        if(color[x.F] == -1) {
            color[x.F] = color[i]^x.S;
            dfs(x.F);
        } else if(color[x.F] != color[i]^x.S)
            bip = 0;
}

void solve() {
    cin>>n>>m;
    g.assign(n+m+2, vector<pii>());
    color = vector<int>(n+m+2, -1);
    int sus = n+1;
    f(i,m) {
        int x, y;
        string s;
        cin>>x>>y>>s;
//        --x, --y;
        if(s == "crewmate") {
            g[x].push_back({sus,1});
            g[sus].push_back({x,1});
            g[sus].push_back({y,1});
            g[y].push_back({sus,1});
            sus++;
        } else {
            g[x].push_back({y,1});
            g[y].push_back({x,1});
        }
    }

    ll ans = 0;
    bip = 1;

    ff(i,1,n+1) {
        if(color[i] != -1) continue;
        c[0] = c[1] = 0;
        color[i] = 0;
        dfs(i);
        ans+=max(c[0],c[1]);
    }
    ans = bip?ans:-1;
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}



