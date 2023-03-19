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
vi v[120];
int mark[120],mrk,cnt;

void dfs(int src) {
    f(i,v[src].size()) {
        int  u  = v[src][i];
        if(mark[u] != mrk) {
            mark[u] = mrk;
            dfs(u);
        }
    }
}
void init(int n) {
    f(i,n+1)
    v[i].clear();
}
int main() {
    int n;
     int a ,b;
    while(cin>>n,n) {
        init(n);

        while(cin>>a,a)
            while(cin>>b,b)
                v[a].pb(b);
        cin>>a;
        while(a--) {
            vi vv;
            mrk++;
            cin>>b;
            dfs(b);
            ff(i,1,n) {
                if(mark[i] != mrk)
                    vv.pb(i)
                }
            cout<<vv.size();
            f(i,vv.size()) {
                cout<<" "<<vv[i];
            }
            cout<<endl;
        }
    }
}

