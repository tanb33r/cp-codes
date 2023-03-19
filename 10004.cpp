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
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;
vi v[222];
int mark[222];


void init() {
    f(i,220) {
        mark[i] = -1;
        v[i].clear();
    }

}

bool bfs(int src, int color) {
    queue<int> q;
    q.push(src);
    mark[src] = color;

    while(!q.empty()) {
        int  u   = q.front();
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
    return 1 ;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b, n, k ;
    while(cin>>n,n) {
        init();
        cin>>k;
        f(i,k) {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        cout <<((bfs(0,1))?"BICOLORABLE.":"NOT BICOLORABLE.")<<endl;
    }
}
