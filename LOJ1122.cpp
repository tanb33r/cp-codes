#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
int T = 1,m,n;
const int maxn = 25;
ll v[maxn],dp[maxn][maxn];
int digit(int pos,int dig) {
    if(pos == n) return 1;

    if(dp[pos][dig]!=-1)return dp[pos][dig];

    ll ans = 0 ;
    ff(i,1,m+1)
    if(abs(v[i]-dig)<3)
        ans+=digit(pos+1,v[i]);
    return dp[pos][dig]=ans;
}

void solve() {
    cin>>m>>n;

    ff(i,1,m+1)cin>>v[i];
    memset(dp,-1,sizeof dp);
    ll ans = 0;
    ff(i,1,m+1)
    ans+=digit(1,v[i]);

    cout<<"Case "<<T++<<": "<<ans<<"\n";

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
