#include<bits/stdc++.h>
using namespace std;

int multipletest;
const int DEBUGGER = 0;

#define io                          ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define mset(a,v)                   memset(a,v,sizeof(a))
#define lp(i,a,n)                   for(int i=a;i<n;i++)
#define lpr(i,a,n)                  for(int i=n-1;i>=a;i--)
#define stlp(it,stl)                for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();it++)
#define stlpr(it,stl)               for(__typeof(stl.rbegin()) it=stl.rbegin();it!=stl.rend();it++)
#define r(a)                        a.begin(),a.end()
#define II                          ({ ll temp; cin>>temp; temp; })
#define SI                          ({ string temp; cin>>temp; temp; })
#define AI(a)                       ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n)a[I]=II; })
#define AO(a)                       ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n){cout<<(I?" ":"")<<a[I];} if(1)cout<<endl; })
#define VI(v)                       ({ lp(I,0,v.size())v[I]=II; })
#define VO(v)                       ({ lp(I,0,v.size()){cout<<(I?" ":"")<<v[I];} if(1)cout<<endl; })
#define outa(a)                     ({ if(DEBUGGER)dbg(a); else cout<<a<<endl; })
#define endl                        "\n"
#define dbg(a)                      ({ if(DEBUGGER)cout<<#a<<" = "<<a<<endl; })
#define cbit(n,p)                   (n&(1LL<<p))
#define sbit(n,p)                   (n|(1LL<<p))
#define tbit(n,p)                   (n^(1LL<<p))
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;

const ll MAX = 1e5+5;
ll n,m,src,l,k,vis[MAX],dis[MAX];
vector<ll>edges[MAX],cost[MAX];
int  u[MAX],v[MAX],w[MAX];
void solve() {
    n=II,m=II,src=II,l=II,k=II;
    int M=m;
    mset(vis,0LL),
         mset(dis,0LL);
    lp(i,0,n+3)
    edges[i].clear(),
          cost[i].clear();
    lp(i,0,m) {
        cin>>u[i]>>v[i]>>w[i];
        edges[u[i]].push_back(v[i]);
        cost[u[i]].push_back(w[i]);
        edges[v[i]].push_back(u[i]);
        cost[v[i]].push_back(w[i]);
    }
    int ans=0;
    vis[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty()) {
        int v=q.front();
//        dbg(v<<' '<<dis[v]);
        q.pop();
        if(dis[v]==k+1)
            break;
        lp(i,0,edges[v].size()) {
            if(!vis[edges[v][i]]) {
//                dbg(v<<' '<<edges[v][i]<<' '<<cost[v][i]);
                q.push(edges[v][i]);
                vis[edges[v][i]]=1;
                dis[edges[v][i]]=dis[v]+1;
            }
//            ans=max(ans,cost[v][i]);
        }
    }


    ans=0;
    lp(i,0,m)
    if(min(dis[u[i]],dis[v[i]])<k)
        ans = max(ans,w[i]);
    outa(ans);
}

int main(void) {
    io;
    freopen("path.in","r",stdin);
    multipletest=1;
    if(multipletest) {
        int tc;
        cin>>tc;
        while(tc--)
            solve();
    } else
        solve();
    return 0;
}

