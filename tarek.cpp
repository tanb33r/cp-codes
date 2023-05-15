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

vector<ll> pri;
const int S = 1e7+500;
bool prime[S];
void sieve() {

    pri.push_back(2);
    for(int i = 3 ; i*i < S; i+=2)
        if(!prime[i]) {
            pri.push_back(i);
            for(int j = i*i ; j < S; j+=2*i)
                prime[j] = 1 ;
        }
}
void solve2() {
    ll n=1;
    int x ;
    cin>>x;
    f(i,x) n*=II;
    ll ans = 0, cnt = 0;
    for (int i = 2; i*i<= n and i <= S; i++) {
        if (n % i == 0) {
            int cn = 0;
            while(n % i == 0) {
                cn++;
                n/=i;
            }
            ans+=cn/2;
            cnt+=(cn%2==1);
        }
    }
    if (n > 1) cnt++;
    ans+=cnt/3;
    pr(ans);
//    if (n > 1) v.pb({n,1});
//    for(auto &[x,y] : v) {
//        y = y%2;
//    }
//            cout<<x<<' '<<y<<'\n';
}

void solve() {
    ll n=1;
    int x ;
    cin>>x;
    f(i,x) {
        ll w;
        cin>>w;
        n*=w;
    }
    ll ans = 0ll;
    ll cnt = 0ll;
//    vout(pri);
    for (int i = 0; i<pri.size() and pri[i]<=n+5; i++) {
        if (n % pri[i] == 0) {
            int cn = 0;
            while(n % pri[i] == 0) {
                cn++;
                n/=pri[i];
            }
            ans+=cn/2;
            cnt+=(cn%2==1);
        }
    }
    if (n > 1) cnt++;
    ans+=cnt/3;
    pr(ans);

}


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    sieve();
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
