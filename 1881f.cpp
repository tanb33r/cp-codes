#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
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
const int mx = 2e5+7;



int n;
vector<vector<int>> g;

int dfs(int v, int p, vector<int>& d) {
    if(~p) d[v] = d[p]+1;
    for(int u : g[v])
        if(u != p)
            dfs(u,v,d);

}

void solve() {
    ll n,k;
    cin>>n>>k;

    g.assign(n, vector<int>(0));
    vector<int> marked(k);
    for(int &e: marked) cin >> e, --e;

    f(i,n-1) {
        int x = II;
        int y = II;
        g[--x].pb(--y);
        g[y].pb(x);
    }
    if(k==1) return void(pr(0));


    vector<int> d1(n),d2(n);
    int mx = marked[0];

    dfs(marked[0],-1,d1);
    for(int e: marked)
        if(d1[mx]<d1[e]) mx = e;

    dfs(mx,-1,d2);
    for(int e: marked)
        if(d2[mx]<d2[e]) mx = e;

    pr(++d2[mx]/2);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
