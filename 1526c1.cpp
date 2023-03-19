#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n ;
    cin>>n;
    ll a[n+1];
    ll dp[n+1][n+1];
    for(ll i=1; i<=n; ++i) cin>>a[i];

    memset(dp,-1,sizeof(dp));
    f(i,n+1) dp[i][0]=0;
    for(ll i=1; i<=n; ++i) {
        for(ll j=1; j<=i; ++j) {
            dp[i][j]=dp[i-1][j];
            if(dp[i-1][j-1]>=0 and dp[i-1][j-1]+a[i]>=0) {
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i]);
            }
        }
    }


    for(ll i=n; i; --i) {
        if(~dp[n][i]) {
            pr(i);
            return ;
        }
    }
    pr(0);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t=1;
    while(t--)
        solve();
}
