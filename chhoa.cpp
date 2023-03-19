#include<bits/stdc++.h>
using namespace std;
int n,e;

vector <int> graph[1000];
int vis[1000];
queue<int> q;
void bfs() {
    int u,v;
    while(!q.empty()) {
        u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int i=0; i<graph[u].size(); i++) {
            v=graph[u][i];
            if(vis[v]==0) {
                vis[v]=1;
                q.push(v);
            }
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
    q.push(source);
    bfs();
}
