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
    ll n;
    cin>>n;
    ll a[n+5] {};
    ll b[n+5] {};
    ll ans = 0;
    f(i,n) {
        cin>>a[i+1];
        b[i+1] = a[i+1];
    }
    bool ok = is_sorted(a+1,a+n+1) ;
    ok =1;
//    a[0]  = -1e9;
//    b[0]  = -1e9;
//    int parbo = 0;
    if(n==2 and a[1]>a[2]) {
        ps(NO);
        return;
    }


//    ff(i,1,n-1) {
//        if(a[i]>a[i+1]) {
//            int dif = a[i]-a[i+1];
//            a[i+1]+=dif;
//            a[i+2]+=dif;
//            parbo = 0;
//        } else parbo = abs(a[i]-a[i+1]);
//        ff(i,1,n+1) cout<<a[i]<<' ';cout<<'\n';
    //}
//    debb(n);
    for(int i = n ; i>1 ; i-=2) {
        int dif = abs(b[i-1]-b[i]);
        if(b[i]<b[i-1]) {
//            if(i==2) ok = 0;
            b[i-2] -= (b[i-1]-b[i]);
        }

        else if(i-2>=1) b[i-2] += (b[i]-b[i-1]);
    }

//    if(a[n]>=a[n-1]) ok = 1;
    if(b[1]>b[2])   ok = 0;
//    if(n&1) ok = 1;

    hmm(ok);

    /*
    1 4
    1 3 5 1
    1 5
    1 3 5 5 1
    1 4
    1 1 3 1 -1
    1 4
    1 4 1 -1
    1 4
    30 3 3 28
    */

//    pr(ans);
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
