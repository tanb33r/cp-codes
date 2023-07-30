#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  vpr(x)             return void(pr(x))
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
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
vector<int> graph[MAX];
int f1, ans[MAX], maxd;

void dfs(int u, int p, int d = 0) {
    ans[u] = max(ans[u],d);

    if(d>=maxd) maxd = d, f1 = u;
    for(auto v:graph[u])
        if(v!=p)
            dfs(v,u,d+1);
}


void solve() {
    ll n;
    cin>>n;
    f(i,n-1) {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1,1);
    int f2 = f1;
    maxd = 0;
    dfs(f2,f2);
    maxd = 0;
    dfs(f1,f1);
//    for(int i =1 ; i<=n; i++)
//        cout<<ans[i]<<' ';

    cout<<maxd<<'\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
