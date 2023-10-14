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
    ll n,k;
    cin>>n>>k;
    int a[n];
    int b[n];
    int mx = -1;
    f(i,n) cin>>a[i];
    f(i,n) {
        cin>>b[i];
        mx=max(mx,b[i]);
    }
    vector<pii> v,v2;
    f(i,n) v.pb({a[i],b[i]});
    sort(all(v));
    bool mark[n+5] {};
    f(i,n-1)
    if(v[i].S>=v[i+1].F) {
        mark[i]=1;
    }
    int x = -1;
    int y = -1;
    debb(x);
    f(i,n) {
        x = v[i].F;
        while(i<n-1 and mark[i]) {
            i++;
            ps(asd);
        }
        y = v[i].S;
        v2.pb({x,y});
        debb(x);
    }
    debb(v2.size(),mx);
    ll ans = mx+ 2*v2.size();

    pr(ans);
}

int main() {
    //    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
