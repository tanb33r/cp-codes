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
#define  vout(v)            cerr<<(#v)<<" = ";for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
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
    int n,q;
    cin>>n>>q;
    vector<ll> a(n,0),pref(n,0), mi(n,0);
    ll ans = 0;
    ll x = 0;

    f(i,n) {
        cin>>a[i];
        pref[i]=(!i)?a[i]:pref[i-1]+a[i];
        x = max(x,a[i]);
        mi[i] = x;
    }
//    vout(pref);
//    vout(mi);
    f(i,q) {
        ll x;
        cin>>x;
        ll in;
//        if(upper_bound(all(mi),x)==mi.end())
//            in = n-1;
//        else
        in = upper_bound(all(mi),x)-mi.begin()-1;
//        deb(x<<' '<<in);
        if(in==-1)cout<<0<<' ';
        else     cout<<(pref[in])<<' ';
//        if(mi[in]>x)in--;
    }
    newl;

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


