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

typedef pair<int,int> pii;
const int MAX = 2e5+5;

void solve() {
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll b[n];
    f(i,n)cin>>a[i];
    f(i,n)cin>>b[i];
    vector<pii> v;
    bool mar[n+5] {};
    f(i,n-1) {
        if(b[i]+1 == a[i+1])
            mar[i] = 1;
    }
    ll tot = 0;
    f(i,n) tot+=b[i]-a[i]+1;
    if(tot<k) {
        pr(-1);
        return;
    }
//    pr("");
    f(i,n) {
        int x = a[i];
        while(i<n-1 and mar[i]) i++;
        int y = b[i];
        v.pb({x,y});
    }
//    f(i,v.size()) {
//        pr(v[i].F<<' ' <<v[i].S);
//    }

    int s = 0;
    int o = 0;
    int e = -1;
    int rem = 0;
    int l = 0;
    f(i,v.size()) {
        if(v[i].S==v[i].F) o++;
        int dif = v[i].S - v[i].F +1;
        s++;
        l=i;
        if(k>dif) {
            k -= dif;
            e = v[i].S;
        } else {
            e = v[i].F+k-1;
            rem = dif-k;
            k=0;
            break;
        }
    }
    ll ans = e+2*s;
    while(o-->0 and rem-->0) {
        ans--;
    }

    debb(s,rem,e);

    for(int i = l+1 ; i<v.size() and o>0; i++) {
        if(v[i].S==v[i].F) continue;
        int dif = v[i].S - v[i].F +1;
        int nibo = min(o,dif);
        o-=nibo;
        e=v[i].F+nibo-1;
        s -= nibo;
        s++;
        ll ans2 = e+2*s;
        ans = min(ans2,ans);
    }
    pr(ans);
    /*

    1
    2 1
    1 3
    1 3

    */

}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
