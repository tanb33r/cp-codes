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

const int maxN = 5000;

int N;

ll p[maxN+1], dp[maxN+1][maxN+1];
ll a[maxN+1];
int n;
ll sum(int l, int r) {
    return p[r]-p[l-1];
}

ll solve(int l, int r) {
    if(dp[l][r]) return dp[l][r];
    if(l==r) return a[l];
    return dp[l][r] = max(a[l]+sum(l+1,r) - solve(l+1,r),a[r]+sum(l,r-1) - solve(l,r-1));
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n;
    for(int i =1 ; i<=n; i++) {
        cin>>a[i];
        p[i] = p[i-1] + a[i];
    }
    cout<<solve(1,n)<<'\n';
}


