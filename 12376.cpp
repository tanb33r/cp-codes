#include <bits/stdc++.h>

using namespace std;
const long long MAX = 4e5+5;
vector<int>g[MAX];
int p[MAX];
int ans=0;
int node ;
void dfs(int u) {
    int m = 0;
    for(auto x:g[u])
        if(m<p[x]) {
            node = x;
            m = p[x];
        }
    if(g[u].size()==0) return;
    ans+=m;
    dfs(node);
}
int T=1;
void solve() {
    int n,k;
    cin>>n>>k;
    for(int i=0; i<(n); i++) cin>>p[i];
    for(int i=0; i<100; i++) g[i].clear();
    for(int i=0; i<(k); i++)  {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    ans = 0;
    dfs(0);
    cout<<"Case "<<T++<<": "<<ans<<" "<<node<<"\n";

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


