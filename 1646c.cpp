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

ll fact[16];
ll solve(ll x,ll k=0,ll n=15) {
    ll ans = 1000;
    if (n==-1) return __builtin_popcountll(x)+k; // 1011

    if(fact[n]<=x)
        ans = min(ans,solve(x-fact[n],k+1,n-1));
    ans = min(ans,solve(x,k,n-1));
    return ans;
}
int  main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll t,x;
    fact[0]=1;
    for(ll i=1; i<=15; i++)
        fact[i]=i*fact[i-1];


    cin>>t;
    while(t--) {
        cin>>x;
        cout<<solve(x)<<"\n";
    }
}





