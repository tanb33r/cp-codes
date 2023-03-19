#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  pb(x) push_back(x);
#define  in(x) int x; cin>>x;
#define  w(t)  int t; cin>>t; while(t--)
#define  d(x)  cout<<x<<"\n"
#define  endl "\n"
#define  PI    acos(-1.0)
#define  all(v) (v).begin(),(v).end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define maxn 200005
using namespace std;

vector<int>node[maxn];
int n,k,u,v,depth[maxn]= {0},sz[maxn]= {0},det[maxn];
long long ans=0;
int cmp(int a,int b) {
    return a>b;
}
int dfs(int u,int f) {
    depth[u]=depth[f]+1;
    sz[u]=1;
    for (int i=0; i<node[u].size(); ++i) {
        if ((v=node[u][i])==f)continue;
        sz[u]+=dfs(v,u);
    }
    det[u]=sz[u]-depth[u];
    return sz[u];
}
int main() {
    cin>>n>>k;
    f(i,n-1) {
        cin>>u>>v;
        node[u].pb(v);
        node[v].pb(u);
    }
    dfs(1,0);
    nth_element(det+1,det+n-k,det+n+1,cmp); // last elements gula minimum hobe
    for (int i=1; i<=n-k; ++i)ans+=det[i];
    cout<<ans;
}
