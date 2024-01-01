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
const int mod = 998244353;
const int N = 1e5+7;

void solve() {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll ra[k][2];
    ll ans=0;
//    f(i,n) cin>>a[i];
    f(i,k) cin>>ra[i][0]>>ra[i][1];

    ll dp[n+5] {};
    dp[0] = 1;
    dp[1] = -1; // so summing will make it 0

    f(i,n) {
        if(i>0) dp[i] += dp[i-1],dp[i]%=mod; // prefix
        f(j,k) {
            if(i+ra[j][0] < n) dp[i + ra[j][0]] += dp[i],dp[i + ra[j][0]]%=mod;
            if(i+ra[j][1]+1 < n) {
                dp[i + ra[j][1]+1] -= dp[i];
                while(dp[i + ra[j][1]+1]<0)
                    dp[i + ra[j][1]+1]+=mod;
                dp[i + ra[j][1]+1]%=mod;
            }
        }
    }
    pr(dp[n-1]);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
