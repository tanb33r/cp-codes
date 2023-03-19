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
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

bool isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}
typedef pair<int,int> pii;
const int MAX= 2e5+5;

bool cmp(pii a, pii b) {
    return a.S<b.S;
}

void solve() {
    ll n;
    cin>>n;
    vector<pii> v;
    int mx = 0;
    ll ans = 0ll;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while(n % i == 0) {
                cnt++;
                n/=i;
            }
            v.pb({i,cnt});
        }
//        else if(n>100000 and isPrime(n)) {
//            v.pb({n,1});
//            break;
//        }
    }
    if (n > 1) v.pb({n,1});
    if(v.size()==1) {
        ans = v[0].F*v[0].S;
        pr(ans);
        return;
    }
    sort(all(v),cmp);
    v.pb({1,0});
    ll gun=1;
//    for(int i = 0; i<(int)v.size(); i++)cout<<v[i].F<<' '<<v[i].S<<'\n';


    for(int i = 0; i<(int)v.size(); i++) {
        gun*=v[i].F;
    }
    deb(gun);
    ll minu=0;
    ll vag = 1;
    for(int i = 0; i<(int)v.size()-1; i++) {
        vag*=v[i].F;
        if(v[i].S == v[i+1].S) {
            continue;
        } else {
            debb(v[i].F, minu);
            ans += gun*(v[i].S-minu);
            minu=v[i].S;
            gun/=vag;
//            if(v[i+1].F==1)
//                ans += v[i].F*(v[i].S - minu);
            debb(v[i].F,gun,ans);
            vag = 1;
        }
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
