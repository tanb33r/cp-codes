#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define ps(x)              cout<<#x<<"\n"
#define pb                 push_back
#define eb(x)              emplace_back(x)
#define pr(x)              cout<<x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;

vector<vector<ll>> adj;
vector<bool> vis;

void dfs(int u) {
    for(auto &i : adj[u]) {
        if(vis[i]) continue;
        vis[i] = true;
        dfs(i);
    }
}

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a(n), b(n);
    f(i,n) {
        ll x = II;
        a[i] = {x, i};
    }
    f(i,n) {
        ll x = II;
        b[i] = {x, i};
    }

    sort(all(a));
    sort(all(b));

    adj.assign(n, vector<ll> ());
    vis.assign(n, false);
    for(ll i = 0; i < n - 1; i++) {
        adj[a[i].S].pb(a[i + 1].S);
        adj[b[i].S].pb(b[i + 1].S);
    }
    dfs(a[n-1].S);
    dfs(b[n-1].S);
    vis[a[n-1].S] = 1;
    vis[b[n-1].S] = 1;

    f(i,n) cout<<vis[i];
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
