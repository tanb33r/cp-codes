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

void solve() {
    ll n,k,x;
    cin>>n>>k>>x;

    int xr = 0;
    ff(i,1,n+1) xr ^= i;

    if(xr!=0 and xr!=x) vps(NO);
    if(xr!=0 and k%2==0) vps(NO);
    if(xr!=x and k&1) vps(NO);

    vector<bool> v(n+1,0);
    vector<vector<int>> g;
    ff(i,1,n+1) {
        int inv = i^x;
        if(v[i] or inv>n or v[inv]) continue;
        v[i] = v[inv] = 1;
        g.pb({i});
        if(inv!=0) g.back().pb(inv);
    }
    bool ok = 1;
    vector<int> v2;
    xr = 0;
    ff(i,1,n+1)
    if(!v[i]) {
        v2.pb(i);
        xr^=i;
    }

    if(xr==0) {
        if (!g.empty())
            for(auto m:v2) g[0].pb(m);
        else if(!v2.empty())
            ok=0;
    } else g.pb(v2);
    ok &= g.size()>=k and k%2==g.size()%2;
    if(!ok) vps(NO);

    int s = g.size();
    while(s>k) {
        for(auto x: g.back())
            g[0].pb(x);
        g.pop_back();
        for(auto x: g.back())
            g[0].pb(x);
        g.pop_back();
        k+=2;
    }
    ps(YES);
    for(auto x : g) {
        cout<<x.size()<<" ";
        for(auto y : x) cout<<y<<" ";
    }
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
