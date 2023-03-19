#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x;
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio;      ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;
map< int, int > v;

void BFS(int s, map< int, vector< int > >G) {
    queue< int > q;
    q.push(s);
    v[s] = 0;
    while(!q.empty()) {
        int top = q.front();
        for(int i=0; i<G[top].size(); i++) {
            int n = G[top][i];
            if(!v.count(n)) {
                v[n] = v[top] + 1;
                q.push(n);
            }
        }
        q.pop();
    }
}

int main() {
    int e, c=0;
    while(cin>>e,e) {
        map< int,vector< int > >G;

        f(i,e) {
            in(x);
            in(y);
            G[x].pb(y);
            G[y].pb(x);
        }

        int ttl, s;

        while(scanf("%d %d", &s, &ttl)==2) {
            if(s==0 && ttl==0) break;
            v.clear();

            BFS(s,G);
            int c=0;
            for(auto it : v)
                if(it.second>ttl) ++c;

            c += G.size()-v.size();
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++c,c, s, ttl);
        }
    }
    return 0;
}
