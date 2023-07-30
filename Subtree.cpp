#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            f(I,(v).size())cout<<v[I]<<" ";cout<<"\n"
#define  AI(a,n)            f(I,n)a[I]=II;
#define  AO(a,n)            f(I,n)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  vpr(x)             return void(pr(x))
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX = 2e5+5;
const int MOD = 1e9+7;
ll n, ind;
string emp, boss;
vector<int> edges[MAX];
ll dp[MAX][2];

ll dfs(int u, int col, int p) {
    auto &ans = dp[u][col];
    if(~ans) return ans;
    if(edges[u].size() == 0) return ans = 1;

    ans = 1;
    for(auto v: edges[u]) {
        if(v==p) continue;
        ll ans1 = dfs(v,0,u);
        ll  ans2 = 0;
        if(!col)
            ans2 = dfs(v,1,u);
        ans *= (ans1+ans2)%MOD;
        ans %= MOD;
    }
    return ans;
}

void solve() {
    cin>>n;
    f(i,n-1) {
        int u = II, v=  II;
        edges[u].pb(v);
        edges[v].pb(u);
    }

    for(int i = 1 ; i<=n; i++)
        dp[i][0] = dp[i][1] = -1;

    ll ans =  (dfs(1,1,0) + dfs(1,0,0))%MOD;
    pr(ans);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    solve();
}
