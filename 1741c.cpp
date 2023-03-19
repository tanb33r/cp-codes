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
#define  deb(x)             cerr<<__LINE__<<"line  "<<(#x)<<" = "<<x<<"\n"
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
int n;
ll a[2002];
ll pref[2002];
int check(ll sum) {
    ll sum2=0;
    int ans = 1;
    for(int i = 1; i<=n;) {
        sum2=0;
        int j = 0;
        while(sum2<sum and i<=n) {
            sum2+=a[i];
            j++,i++;
            if(sum2==sum) break;
            if(sum2>sum) return 100000;
//            deb(j);
        }
        ans = max(j,ans);
        if(sum2!=sum) return 100000;
    }
    return (sum2==sum)?ans:100000;
}
void solve() {
    cin>>n;
    int ans = n;
    f(i,n)cin>>a[i+1];

    ff(i,1,n+1) pref[i]=pref[i-1]+a[i];

    for(int j=1; j<=n; j++)
        ans = min(ans,check(pref[j]));
    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


