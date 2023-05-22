#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=(a)-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            f(I,(v).size())cout<<v[I]<<" ";cout<<"\n"
#define  AI(a,n)            f(I,n)a[I]=II;
#define  AO(a,n)            f(I,n)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  vpr(x)             return void(pr(x))
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX = 2e5+5;

void solve() {
    ll n;
    cin>>n;
    ll a[n+5];
    ll L[n+5] {};
    ll R[n+5] {};
    ll ans = 0;
    string s;
    cin>>s;
    s+="=";
    debb(s);
    ll l = 0;
    ll r = 0;
    a[0]=1;
    debb(s.size());
    f(i,s.size()) {
        l +=(s[i]=='L');
        l = (s[i]=='R')?0:l;
        L[i]=l;
    }
    fr(i,s.size(),0) {
        r +=(s[i]=='R');
        r = (s[i]=='L')?0:r;
        R[i]=r;
    }
//    ll x  = *min_element(a,a+n)-1;
//    ll y = 0;
//    if(x<0)
//        y = -x;
//
//    debb(y);
    f(i,n) cout<<R[i]<<' ';    pr("");
    f(i,n) cout<<L[i]<<' ';    pr("");
    f(i,n) cout<<max(L[i],R[i])+1<<' ';
//    f(i,n) cout<<a[i]+y<<' ';
    pr("");
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

