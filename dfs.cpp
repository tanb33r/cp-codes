#include<bits/stdc++.h>
using namespace std;
int n,e;

vector <int> graph[1000];
int vis[1000];

DFS(int u) {
    used[u] = 1;
    for(auto v:g[u])
        if(!used[v])
            dfs(v);
}


void dfs(int source) {
    int v;
    cout<<source<<" ";
    for(int i=0; i<graph[source].size(); i++) {
        v=graph[source][i];
        if(vis[v]==0) {
            vis[v]=1;
            dfs(v);
        }
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
    vis[source] = 1;
    dfs(source);

}
/*
6 6
0 1
1 2
1 3
2 4
4 5
3 5
0

*/
