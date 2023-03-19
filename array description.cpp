#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int maxN = 1e5;
const int maxM = 100;
const ll MOD = 1e9+7;

int n, m, x[maxN+1];
ll ans, dp[maxN+1][maxM+1];

int main() {
    cin>>n>>m;
    ff(i,1,n+1) cin>>x[i];

    if(x[1])
        dp[1][x[1]] = 1;
    else
        for(int i = 1; i <= m; i++)
            dp[1][i] = 1;


    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            dp[i][j] = dp[i-1][j];
            if(j!=1) dp[i][j] += dp[i-1][j-1];
            if(j!=m) dp[i][j] += dp[i-1][j+1];
            dp[i][j]%=MOD;
        }
        if(x[i])
            for(int j = 0; j <= m; j++)
                if(j != x[i])
                    dp[i][j] = 0;
    }

    for(int i= 1; i <= m; i++)
        ans = (ans + dp[n][i]) % MOD;
    pr(ans);
}
