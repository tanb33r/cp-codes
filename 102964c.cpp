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
    ll a[n];
    AI(a);
    vector<int>v,v2,ans;
    sort(a,a+n);
    reverse(a,a+n);
    f(i,n) i<n/2?v.pb(a[i]):v2.pb(a[i]);

    int j=0,k=0;
    f(i,n) ans.pb(i&1?v[j++]:v2[k++]);
    int ok = 1;
    for(int i=1; i<n-1; i++) {
        if(i&1) ok &= ans[i-1]<ans[i] and ans[i]>ans[i+1];
        else    ok &= ans[i-1]>ans[i] and ans[i]<ans[i+1];
    }
    if(ok) {
        vout(ans);
    } else pr(-1);


}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}


