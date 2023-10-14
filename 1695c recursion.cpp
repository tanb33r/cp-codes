#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
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
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
int movx[] = {1,0};
int movy[] = {0,1};
int n,m;
int a[1002][1002];
int dp[1002][1002][2];

void solve() {
    cin>>n>>m;
    f(i,n) f(j,m) cin>>a[i][j];
    ll ans = 0;
    if((n+m)%2==0) return void(ps(NO));
    f(i,n) f(j,m) {
        dp[i][j][0] = 1e9;
        dp[i][j][1] = -1e9;
        if(i) {
            dp[i][j][0] = min(dp[i-1][j][0],dp[i][j][0]);
            dp[i][j][1] = max(dp[i-1][j][1],dp[i][j][1]);
        }
        if(j) {
            dp[i][j][0] = min(dp[i][j][0],dp[i][j-1][0]);
            dp[i][j][1] = max(dp[i][j][1],dp[i][j-1][1]);
        }
        if(dp[i][j][0] >= 1e9 || dp[i][j][1] <= -1e9)
            dp[i][j][0] = dp[i][j][1] = 0;
        dp[i][j][0]+=a[i][j];
        dp[i][j][1]+=a[i][j];
    }
    hmm(!(dp[n-1][m-1][0] > 0 or dp[n-1][m-1][1] < 0));
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}



