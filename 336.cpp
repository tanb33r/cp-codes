#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define fopen freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define fastio ios::sync_with_stdio(0),cin.tie(0)
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

using namespace std;
map< int, int > visited;

void BFS(int s, map< int, vector< int > >G) {
    queue< int > q;
    q.push(s);
    visited[s] = 0;
    while(!q.empty()) {
        int top = q.front();
        for(int i=0; i<G[top].size(); i++) {
            int n = G[top][i];
            if(!visited.count(n)) {
                visited[n] = visited[top] + 1;
                q.push(n);
                }
            }
        q.pop();
        }
    }

int main() {
    int edges, cases=0;
    while(scanf("%d",&edges)==1 & edges!=0) {
        map< int,vector< int > >G;

        f(i,edges) {
            int x, y;
            scanf("%d %d", &x, &y);
            G[x].pb(y);
            G[y].pb(x);
            }

        int ttl, source;
        while(scanf("%d %d", &source, &ttl)==2) {
            if(source==0 && ttl==0) break;
            visited.clear();
            BFS(source,G);
            int c=0;
            for(auto it : visited)
                if(it.second>ttl) ++c;
            c += G.size()-visited.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cases,c, source, ttl);
            }
        }
    return 0;
    }
/*
14
1 2 2 7 1 3 3 4 3 5 5 10 5 11
4 6 7 6 7 8 7 9 8 9 8 6 6 11
1 1 1 2 3 2 3 3 0 0
0

13
0 1
1 2
1 4
1 3
2 6
3 8
4 7
6 10
7 8
7 9
9 10
5 10
5 8

*/
