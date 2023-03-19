#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
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
    bool a[n];
    bool b[n];
    bool c[n];


    ll ans = 0;
    f(i,n)a[i]=b[i]=c[i]=II;
    f(i,n)
    if(a[i]==0) {
        a[i]^=1;
        break;
    }
    for(int i = n-1; i>=0; i--)
        if(b[i]==1) {
            b[i]^=1;
            break;
        }
    int cnta=0;
    int cntb=0;
    int cntc=0;
    ll ansa=0;
    ll ansb=0;
    ll ansc=0;
    f(i,n) {
        (a[i]==1)?cnta++:ansa+=cnta;
        (b[i]==1)?cntb++:ansb+=cntb;
        (c[i]==1)?cntc++:ansc+=cntc;
    }

    ans = max({ansc,ansa,ansb});
    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


