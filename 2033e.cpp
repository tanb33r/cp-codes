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

ll a[1000005];
ll vis[1000005];
ll dp[1000005];

ll cnt(ll src, ll target) {
    if(vis[src] == 1) return 0;

    vis[src]=1;
    if(src==target) return 1;
    return cnt(a[src], target) + 1;
}

void solve() {
    ll n;
    cin>>n;

    for(int i=1; i<=n; i++)
        vis[i]=0;

    ll ans = 0;
    ll sum = 0;

    f(i,n) cin>>a[i+1];

    for(int i=1; i<=n; i++) {
        if(a[i]==i or a[a[i]]==i) continue;
        if(vis[a[i]]==1) continue;

        ll x = cnt(a[i],i);
        ans+=dp[x];
    }

    pr(ans);
}


int main() {
    dp[1] = dp[2] = 0;
    dp[3] = 1;
    for(int i=4; i <= 1000000; i++)
        dp[i] = dp[i-2]+1;

    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
