#include <iostream>
#include <cmath>
#include <cstdio>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  fr(i,n)            for(int i=int(n);~i;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const ll mod = 1e9;
ll dp[1000002];
ll coin[109];
ll  tc = 1;
void solve() {
    ll n,k,ans=0;
    cin>>k;
    ll x = 1;
    f(i,33) {
        coin[i] = x;
        x<<=1ll;
    }
    dp[0] = 1;
    ll i =0 ;
    while(coin[i]<=k) {
        for (ll j = coin[i]; j <= 1e6; j++) {
            dp[j] = (dp[j-coin[i]] + dp[j]) % mod;
        }
        i++;
    }
//    arrp(dp,10);
    pr(dp[k]);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
