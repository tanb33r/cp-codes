#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=n-1;i>=j;--i)
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
typedef pair<int,int> pii;
typedef vector<ll> vl;
const ll INF = 9e18;
ll n,m,mem[102][10004],mx[102][102];
vector<vl>a;
ll dp(int i,int j) {
    if(j==0) return 0;
    if(i==n) return -INF;
    if(mem[i][j]!=-1)return mem[i][j];
    mem[i][j]=dp(i+1,j);
    ff(i1,0,a[i].size()+1) {
        if(j-i1<0)break;
        mem[i][j]=max(mem[i][j],dp(i+1,j-i1)+mx[i1][i]);
    }
    return mem[i][j];
}
void solve() {
    memset(mem,-1,sizeof mem);
    cin>>n>>m;

    f(i,n) {
        ll k=II;
        vector<ll> t,pref(k),suff(k);
        f(i,k)t.pb(II);
        a.pb(t);
        pref[0]=t[0];
        suff[k-1]=t[k-1];
        ff(i1,1,k)      pref[i1]=pref[i1-1]+t[i1];
        fr(i1,k-1,0)    suff[i1]=suff[i1+1]+t[i1];
        for(int i=-1; i<k; i++)
            for(int j=i; j<k+1; j++) {
                ll sz = i-j+1+k;
                ll val = 0;
                if(i!=-1) val +=pref[i];
                if(j!=k)  val +=suff[k];
                mx[sz][i]=max(val,mx[sz][i]);
            }
        pr(dp(0,m));
    }
}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


