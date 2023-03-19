#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(j);i>=n;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
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
ll W[1009],B[1009],n,m,w1,w[1009],b[1009];
ll dp[1009],x,y,j,sumw,sumb,mark[1009];
vector<int> g[1009];
void dfs(int x) {
    W[j]=w[x],B[j++]=b[x],sumw+=w[x],sumb+=b[x],mark[x]=1;
    f(i,g[x].size()) {
        if(!mark[g[x][i]])
            dfs(g[x][i]);
    }
}

void solve() {
    cin>>n>>m>>w1;
    ff(i,1,n+1) cin>>w[i];
    ff(i,1,n+1) cin>>b[i];
    f(i,m)cin>>x>>y,g[x].pb(y),g[y].pb(x);
    ff(i,1,n+1) {
        if(mark[i]==0) {
            j=0,sumw=0,sumb=0;
            dfs(i);
            B[j]=sumb,W[j]=sumw,j++;
            fr(k,w1,1)
            ff(l,0,j)
            if(k-W[l]>=0) dp[k]=max(dp[k],dp[k-W[l]]+B[l]);
        }
    }
    pr(dp[w1]);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

