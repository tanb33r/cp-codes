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
const int MOD= 1e9+7;

void solve() {
    int n;
    cin>>n;
    map<pii,int> cnt;
    f(i,n) {
        double x;
        cin>>x;
        ll k = llround(x*1e9);
        int t=0,f=0;
        while(k % 2 == 0) {
            t++;
            k /= 2;
        }
        while(k % 5 == 0) {
            f++;
            k /= 5;
        }
        cnt[ {t,f}]++;
    }
    ll ans = 0ll;
    for(auto p1 : cnt)
        for(auto p2 : cnt)
            if(p1.F.F+p2.F.F >= 18 && p1.F.S+p2.F.S >= 18)
                if(p1 < p2)
                    ans += (ll) p1.S * p2.S;
                else if(p1 == p2)
                    ans += (ll) p1.S * (p1.S - 1) / 2;

    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}


