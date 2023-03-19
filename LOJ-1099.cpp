#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  MAX                5005
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
vector< pair<int, int> > graph[MAX];
ll dis[MAX],dis2[MAX];


void dij(int s) {
    priority_queue< pair<int, int> > q;
    ff(i,1,MAX) dis[i] = INT_MAX;
    q.push({0,s});
    dis[s]=0;
    while(!q.empty()) {
        int a = q.top().S;
        int b = q.top().F;
        q.pop();
        for(auto v:graph[a]) {
            if(dis[v.F]>dis[a]+v.S) {
                dis[v.F]=dis[a]+v.S;
                q.push({dis[v.F],v.F});
            }
        }
    }
}
int T = 1;

void solve() {
    f(i,MAX) graph[i].clear();
    int n,r;
    cin>>n>>r;
    int u,v, w;
    f(i,r) {
        cin>>u>>v>>w;
        graph[v].pb({u,w});
        graph[u].pb({v,w});
    }
    dij(1);
    ff(i,1,MAX) dis2[i] = dis[i];
    dij(n);
    int ans = INT_MAX;
    for(int i = 1 ; i<= n; i++) {
        for (auto x:graph[i]) {
            ll d = dis2[i]+dis[x.F]+x.S;
            if(d>dis2[n])
                ans = min((ll)ans,d);
        }
    }
    cout<<"Case "<<T++<<": "<<ans<<"\n";

}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

