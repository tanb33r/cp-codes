#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

int n, m;
int a[N], b[N], c[N], ans[N];
vector< int > g[N];

void solve() {
    cin>>n>>m;
    for(int i = 1 ; i <= n; i++) g[i].clear();
    for(int i = 0 ; i < n; i++)
        cin>>a[i];

    for(int i = 0 ; i < n; i++) {
        cin>>b[i];
        if(b[i] != a[i])
            g[b[i]].push_back(i);
    }

    for(int i = 0; i < m; i++)
        cin>>c[i];
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

