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
const int MAX= 2e5+5;
int n, m, dp[501][501];

const int INF = 0x3f3f3f3f;
int solve(int a, int b) {
    if(a > b)   swap(a, b);


    if(dp[a][b] != INF)
        return dp[a][b];
    if(a == b)              return dp[a][b] = 0;
    if(a == 1 || b == 1)    return dp[a][b] = (a == 1 ? b-1 : a-1);
    for(int i =1; i<a; i++)
        dp[a][b] = min(dp[a][b],solve(i,b)+solve(a-i,b)+1);
    for(int i =1; i<b; i++)
        dp[a][b] = min(dp[a][b],solve(a,i)+solve(a,b-i)+1);
    return dp[a][b];


}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    memset(dp, 0x3f, sizeof(dp));
    cin>>n>>m;
    while(t--)
        cout<<solve(n,m)<<"\n";
}


