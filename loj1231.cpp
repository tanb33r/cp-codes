#include <bits/stdc++.h>
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
const int mod = 100000007;
int dp[1005];
int coin[55];
int cnt[55];
int  tc = 1;
void solve() {
    int n,k,ans=0;
    cin>>n>>k;
    f(i,n) cin>>coin[i+1];
    f(i,n) cin>>cnt[i+1];

    memset(dp, 0, sizeof(dp));
        dp[0] = 1;

    ff(i,1,n+1) {
        fr(j,k)
        for (int l = 1; l <= cnt[i]; l++) {
            if (j - l*coin[i] >= 0)
                dp[j] += dp[j-coin[i]*l];
        }
        f(j,k+1)
        dp[j] %= mod;

    }
    arrp(dp,k+1);
    cout<<"Case "<<tc++<<": "<<dp[k]<<endl;
}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
