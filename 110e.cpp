#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
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
const int mod = 1e9+7;
using namespace std;
int n,par[100001],s[100001];
typedef pair<int,int> pii;
int parent(int x) {
    return par[x]==x?x:par[x]=parent(par[x]);
}
void solve() {
    cin>>n;
    ll ans = 0;
    for(int i=1; i<=n; ++i)par[i]=i,s[i]=1;
    for(int i=1,x,y,z,p,q; i<n; ++i) {
        cin>>x>>y>>z;
        bool out=z>0;
        for(; z; z/=10)if(z%10!=4&&z%10!=7)out=0;
        if(out)continue;
        p = parent(x),q=parent(y);
        par[p]=q,s[q]+=s[p];
    }
    ff(i,1,n+1)ans+=(ll)(n-s[parent(i)])*(n-s[parent(i)]-1);
    pr(ans);
}
int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}


