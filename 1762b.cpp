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


ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
ll lcm(ll a, ll b) {
    return (a*b)/gcd(a,b);
}


void solve() {
    ll n;
    cin>>n;
    ll a[n];
    vector<pair<ll,ll>> v;
    vector<pair<ll,ll>> ans;
    f(i,n) {
        int x = II;
        v.pb({x,i});
    }
    sort(all(v));
    ll make = v[0].F;
    ff(i,1,n) {
        if(v[i].F%make) {
            ll clos = (v[i].F/make +1)*make;
            ll val  = clos - v[i].F;
//            assert(val <= v[i].F and val>0);
            ans.pb({v[i].S+1,val});
            v[i].F+=val;
        }
        make = v[i].F;
    }

    pr(ans.size());
    f(i,ans.size())
    cout<<ans[i].F<<' '<<ans[i].S<<'\n';
}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

