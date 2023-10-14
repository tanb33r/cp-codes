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
typedef pair<int,int> pii;
int movx[] = {1,0};
int movy[] = {0,1};
int n,m;
int a[1002][1002];

int dfs(int x,int y, int MAX) {
    int ans = 0;
    if(!(x<n and y<m)) return 0;
//    int p = a[x+1][y];
//    int q = a[x][y+1];
    if(MAX) return a[x][y]+max(dfs(x+1,y,MAX),dfs(x,y+1,MAX));
    else    return a[x][y]+min(dfs(x+1,y,MAX),dfs(x,y+1,MAX));

}
void solve() {
    cin>>n>>m;
    f(i,n) f(j,m) cin>>a[i][j];
    ll ans = 0;
    if((n+m)%2==0) return void(ps(NO));

    int mx = dfs(0,0,1);
    int mn = dfs(0,0,0);
    if(mx<0 or mn>0)  return void(ps(NO));
    ps(YES);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


