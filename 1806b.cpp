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
    ll a[n];
    ll b[n];
    ll ans = 0;
    ll cnt = 0;
    ll cnt1 = 0;
    f(i,n) {
        cin>>a[i];
        cnt += !a[i];
        cnt1 += a[i]==1;
    }
//    deb(cnt);
    if(cnt<=(n+1)/2) {
        pr(ans);
        return;
    }
    if(cnt==n) {
        pr(1);
        return;
    }

    if(cnt+cnt1 == n) {
        pr(2);
        return;
    }
    pr(1);
//
//    sort(a,a+n);
//    int i = 0;
//    while(i<n and a[i]==0)i++;
//
//    for(int j = 0; j<n; j+=2)
//        if(cnt>0) {
//            cnt--;
//            b[j] = 0;
//        }
//    for(int j = 1; j<n; j+=2)
//        b[j] = a[i++];
//
//
//    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


