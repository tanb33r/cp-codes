#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  in(x)              int x ; cin>>x
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

const int N = 100010;
int dis[N],u[N],v[N],w[N];

int  src,n,m,l,k;
vector<int>vec[N];
void bfs(int src,int n) {
    ff(i,1,n+1) dis[i] = -1;
    dis[src] = 0;
    queue<int> q;
    q.push(src);

    while(!q.empty()) {
        int a = q.front();
        q.pop();
        for(int b:vec[a])
            if(dis[b]==-1) {
                dis[b] = dis[a]+1;
                q.push(b);
            }

    }
}

void solve() {
    cin>>n>>m>>src>>l>>k;
    ff(i,1,n+1) vec[i].clear();
    ff(i,1,m+1)  {
        cin>>u[i]>>v[i]>>w[i];
        vec[u[i]].push_back(v[i]);
        vec[v[i]].push_back(u[i]);
    }
    bfs(src,n);
    int ans=0;
    ff(i,1,m+1)
    if(min(dis[u[i]],dis[v[i]])<k)
        ans = max(ans,w[i]);
    pr(ans);
}

int main(void) {
    ios_base::sync_with_stdio(0),cin.tie(0);
    freopen("path.in","r",stdin);
    int t;
    cin>>t;
    while(t--)
        solve();
}


