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
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
ll f[502][502],dp[502][502];

ll rec(ll last,ll rem) {
    if(rem == 0) return 1;
    if(dp[rem][last] != -1) return dp[rem][last];
    ll ans = 0ll;
    ff(i,last+1,rem+1) {
        ans+=rec(i,rem-i);
    }
    return dp[rem][last] = ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);

    ll n;
    cin>>n;
    memset(dp,-1,sizeof dp);
    ll ans = rec(0,n);
    ans=0;

int x = n+1;
    while(x--) {
        ans += rec(0,x);
    }


    ff(i,0,n+1) {
        ff(k,0,n+1)
        cout<<dp[i][k]<<"\t";
        newl;
    }
    pr(ans);

}
//    f(i,n+1) dp[i][i]=1;
//    ff(i,2,n+1)
//    for(int k = i-1; k>0; k--)
//        dp[k][i] = dp[k+1][i-k] + dp[k+1][i];
//
//
//
//cout<<(dp[1][n]-1);
//}


