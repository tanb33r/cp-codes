#include <bits/stdc++.h>
#define  f(i,n)             for(int i=1;i<=n;i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
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
const int MAX= 1e5+5;
const int MOD= 1e9+7;
int a[MAX];
int b[MAX];
int c[MAX];
bool vis[MAX];
int cnt = 0;
map<int,int>ma,mb;
void dfs(int x) {
    if(vis[x])return;
    vis[x]=1;
    dfs(b[ma[x]]);
}
void solve() {
    int n;
    cin>>n;
//    memset(a,0,sizeof a);
//    memset(b,0,sizeof b);
//    memset(c,0,sizeof c);
//    ma.clear();
//    mb.clear();
    f(i,n)cin>>a[i],ma[a[i]]=i,vis[i]=0;
    f(i,n)cin>>b[i],mb[b[i]]=i;
    f(i,n) {
        cin>>c[i];
        if(c[i])dfs(c[i]);
    }

    ll ans = 1;
    f(i,n)
    if(!vis[i]) {
        if(ma[i]!=mb[i]) {
            dfs(i);
            ans<<=1;
            if(ans>MOD)
                ans%=MOD;
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


