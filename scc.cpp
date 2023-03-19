#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mod=(int) 1e5+1,md=(int)1e9+7;
vector<int> g[mod],adj[mod],v,components[mod];
int a[mod],mark=-1;
int n,m,t,x,y;
map<ll,ll> mp;
bool visit[mod]= {0};

void dfs(int s) {
    visit[s]=1;
    for(auto u:g[s]) {
        if(!visit[u])
            dfs(u);
    }
    v.push_back(s);
}

void dfs1(int s) {
    visit[s]=true;
    components[mark].push_back(s);
    mp[a[s]]++;
    t=min(t,a[s]);
    for(auto u:adj[s])
        if(!visit[u])
            dfs1(u);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    cin>>m;
    for(int i=0; i<m; i++) {
        cin>>x>>y;
        g[--x].push_back(--y);
        adj[y].push_back(x);
    }

    for(int i=0; i<n; i++)
        if(!visit[i])
            dfs(i);

    memset(visit,0,sizeof(visit));
    ll temp=1,ans=0;
    reverse(v.begin(),v.end());
    for(auto i:v)
        if(!visit[i]) {
          mark++;
          dfs1(i);
        }

    cout<<mark;
    return 0;
}
