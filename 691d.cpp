#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
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
#define  II                 ({int t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
const int N = 1200300;
bool vis[N];
int ans[N];
int a[N];

vector<int> v[N];
vector<int> perm, pos;
void dfs(int x) {
    if(vis[x]) return;
    vis[x]=1;
    pos.pb(x);
    perm.pb(a[x]);
    for(auto to : v[x]) dfs(to);

}
void solve() {
    int n,m;
    cin>>n>>m;
    f(i,n) cin>>a[i+1];
    f(i,m) {
        int x, y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=n; i++) {
        if(!vis[i]) {
            pos.clear();
            perm.clear();
            dfs(i);
            sort(all(pos));
            sort(all(perm), greater<int>());

            f(j,perm.size())
				ans[pos[j]] = perm[j];
        }
    }
    f(i,n)
    cout<<ans[i+1]<<" ";
    newl;
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}


