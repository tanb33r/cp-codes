#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;(a<n)?i<n:i>=n;(i<n)?i++:i--)
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
int n;
int close(ll b[], ll x) {
    ll ans = 2e9;
    int pos=-1;
    f(i,n)
    if(ans>abs(b[i]-x))  ans = abs(b[i]-x),pos = i;

    return pos;
}
void solve() {
    cin>>n;
    ll a[n];
    ll b[n];
    f(i,n)cin>>a[i];
    f(i,n)cin>>b[i];
    vector<int> A = {0, close(b, a[0]),n-1};
    vector<int> B = {0, close(b, a[n - 1]), n - 1};

    ll realans=1e16;
    for(int i:A)
        for(int j:B) {
            ll ans  = abs(a[0]-b[i])+ abs(a[n - 1] - b[j]);

            if (i and j) {
                ans+=abs(b[0] - a[close(a,b[0])]);
            }
            if (i<n-1 and j<n-1) {
                ans+=abs(b[n-1] - a[close(a,b[n-1])]);
            }
            realans = min(realans,ans);
        }

    pr(realans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


