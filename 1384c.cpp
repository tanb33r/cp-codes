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
typedef  long long          ll;
using namespace std;

void solve() {
    {
        int n;
        string a, b;
        cin>>n>>a>>b;
        vector<vector<int>> adj(Alp);
        f(i,n) {
            if (a[i] != b[i]) {
                if (a[i] > b[i]) {
                    d(-1);
                    return;
                }

                adj[a[i]-'a'].push_back(b[i]-'a');
                adj[b[i]-'a'].push_back(a[i]-'a');
            }
            vector<bool> mark(Alp);
            function<void(int)> dfs = [&](int u) {
                mark[u] = true;
                for (auto v : adj[u])
                    if (!mark[v])
                        dfs(v);
            };

            int ans = Alp;
            for (int i = 0; i < Alp; ++i)
                if (!mark[i])
                    dfs(i), --ans;
            cout << ans << "\n";
        }

    }



    int main() {
        ios::sync_with_stdio(0),cin.tie(0);
        int t=1;
        cin>>t;
        while(t--)
            solve();
    }
