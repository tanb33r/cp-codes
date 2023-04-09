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
#define  AO(a,n)            for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
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

ll n,x1,x2,y1,y2;
ll sqr(ll x, ll y) {
    ll xasi;
    ll yasi;
    if(n/2 < x) x = n/2 - (x-n/2 -1);
    if(n/2 < y) y = n/2 - (y-n/2 -1);


    ll ans = min(x,y);
//debb(ans);
return ans;
}
typedef pair<int,int> pii;
const int MAX = 2e5+5;

void solve() {
    cin>>n>>x1>>y1>>x2>>y2;
//    x1--;
//    x2--;
//    y1--;
//    y2--;
//    ll xasi = min(x1,n-x1);
//    ll yasi = min(y1,n-y1);
//    ll asi = min(xasi,yasi);
    ll asi = sqr(x1,y1);
    ll jabo = sqr(x2,y2);

//    ll x2asi = min(x2,n-x2);
//    ll y2asi = min(y2,n-y2);
//    ll jabo = min(x2asi,y2asi);
    ll ans = abs(asi-jabo);

    pr(ans);
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
