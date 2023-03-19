#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;(a<=n)?i<n:i>=n;(i<n)?i++:i--)
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
void solve() {
    int n;
    cin>>n;
    ll a[2*n];
    ll b[n];
    f(i,2*n)cin>>a[i];
    f(i,n)cin>>b[i];

    ll ans = 0;
    for(int i=0; i<n; i+=2) {
        int x = abs(a[i]-a[i+1]);
        int y = abs(b[i]-a[i+1]);
        int z = abs(a[i]-b[i+1]);
        int m = min({x,y,z});
        if(m==z) swap(a[i+1],b[i+1]);
        if(m==y) swap(a[i],b[i]);
    }

  for(int i=0; i<n-1; i+=1) {
        ans+= abs(a[i]-a[i+1]);
        ans+= abs(b[i]-b[i+1]);
  }


    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


