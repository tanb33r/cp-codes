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

void solve() {
    ll MAX = 2e15+5;
    ll n;
    cin>>n;
    ll a[n*2];
    ll b[n*2]={};
    ll ans = 0;
    f(i,n*2) {
        cin>>a[i];
        b[i] = (n%2==1)?0:-1;
    }
    sort(a,a+n*2);
    b[2*n-1] = (n%2==1)?0:n;

//        f(i,n*2) {
//    cout<<b[i]<<' ';
//    }
//    cout<<'\n';
//    cout<<'\n';
//    cout<<'\n';

    if(n==1) {
        pr(abs(a[0]-a[1]));
        return;
    }
    if(n==2) {
        ll c[4]= {2,2,2,2};
        MAX=0;
        f(i,n*2) MAX+= abs(a[i]-c[i]);
    }

    ll dif=0;
    ll sum=0;
    f(i,n*2) {
        sum+= abs(a[i]);
        dif+= abs(a[i]-b[i]);
    }
    ans = min({sum,dif,MAX});
    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


