#include <bits/stdc++.h>
using namespace std;
int dis[100],par[100],color[100],where,f=0;
vector <int>adj[100];

void bfs(int src) {
    queue <int> q;
    q.push(src);
    dis[src]=0;
    par[src]=-10;
    color[src]=1;

    while(!q.empty()) {
        int u=q.front();
        if (u==where)
            f=1;
        q.pop();
        ///color[u]=2;
        cout << u << " -> ";
        for (int j=0; j<=adj[j].size(); j++) {

            for (int i=0; i<adj[u].size(); i++) {
                cout << adj[u][i] << " ";
                int v=adj[u][i];
                if (color[v]==-1) {
                    color[v]=1;
                    dis[v]=1+dis[u];
                    par[v]=u;
                    q.push(v);
                    }
                }
            }
        cout << endl;
        ///cout << u << endl;
        color[u]=2;
        }
    }
void init(int n) {
    for (int i=0; i<=n; i++) {
        dis[i]=INT_MAX;
        color[i]=-1;
        par[i]=-1;
        adj[i].clear();
        }
    }
int main() {
    int i,j,k,n,m,a,b,edge,vertex,src;
    cin >> vertex >> edge;   // number of v and e
    init(vertex);
    for (i=1; i<=edge; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        }
    cin >> src >> where;
    bfs(src);
    if (f==1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    }
