#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
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
ll mod = 1e18+7;
using namespace std;
typedef pair<int,int> pii;
int dp[5001][5001];
int shomoy[2001];
int p[2001],n;
int knap(int i, int t) {
    if (t >= n) return 0;
    if (i == n) return 1e18;
    if(dp[i][t]!=-1) return dp[i][t];
    dp[i][t]=1e18;
    return dp[i][t]=min(knap(i+1,t),knap(i+1,t+shomoy[i])+p[i]);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n;
    memset(dp,-1,sizeof(dp));
    f(i, n) {
        cin>>shomoy[i]>>p[i];
        shomoy[i] += 1;
    }
    pr(knap(0, 0));

}

