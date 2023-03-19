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
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

vi v[222];
int mark[222];




bool bfs(int src,int color)

{
    queue <int> q;
    q.push(src);
    mark[src] = color;

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        f(i,v[u].size()) {
            if(mark[v[u][i]] == -1) {
                q.push(v[u][i]);
                mark[v[u][i]] = !mark[u];
            }
            if(mark[v[u][i]] == mark[u] )
                return 0 ;
        }
    }
    return 1;
}


int main() {
    int a,b, n, k ;
fastio;
    while(cin>>n,n) {
        init();
        cin>>k;
        f(i,k) {
            cin>>a>>b;
            v[a].pb(b);
            v[b].pb(a);
        }
        cout <<((bfs(0,1))?"BICOLORABLE.":"NOT BICOLORABLE.")<<endl;
    }
}

