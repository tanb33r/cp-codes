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
#define  cerr               if(0)cerr

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
    ll n,q;
    cin>>n>>q;
    vector<int>v;
    ll a[n], mark[n] {},mark2[n] {};
    f(i,n) cin>>a[i];
    mark[0]=mark2[0]=1;
    mark[1]=mark2[1]=2;
    int cnt = 2;
    for(int i = 2; i<n; i++) {
        if(a[i-1]<a[i] or a[i-2]<a[i-1])
            mark2[i]= ++cnt;
        mark[i]=cnt;
    }
    while(q--) {
        ll ans = 0;
        int l,r;
        cin>>l>>r;
        l-=2,r--;
        ans = mark[r]-(l>=0)*mark[l];
        ans+=(l+1 <= r and mark2[l+1]==0) + (l+2 <= r and mark2[l+2]==0);
        pr(ans);
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    while(t--)
        solve();
}
