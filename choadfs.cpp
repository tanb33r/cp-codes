
#include<bits/stdc++.h>
using namespace std;
int n,e;

vector <int> graph[1000];
int vis[1000];
stack<int> stac;

void dfs(int source) {
    int u,v;
    while(!stac.empty()) {
        u=stac.top();

        cout<<u<<" ";
        for(int i=0; i<graph[u].size(); i++) {
            v=graph[u][i];
            if(vis[v]==0) {
                vis[v]=1;
//                d[v]=1;
                stac.push(v);
            }
        }
        stac.pop();
    }
}

int main() {
    cin>>n>>e; // number of nodes and edges

    memset(vis,0,sizeof vis);
    for(int i=0; i<e; i++) {
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source;
    cin>>source;

 stac.push(source);
    vis[source] = 1;
    dfs(source);
}
