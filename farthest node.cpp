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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;


vector<int> g[200010];
int d1[200010], d2[200010];
void dfs1(int i = 0, int p = -1, int d = 0) {
    d1[i]=d;
    for(auto j : g[i])
        if(j != p)
            dfs1(j, i, d + 1);
}
void dfs2(int i = 0, int p = -1, int d = 0) {
    d2[i]=d;
    for(auto j : g[i])
        if(j != p)
            dfs2(j, i, d + 1);
}


void solve() {
    int n;
    cin >> n;
    for(int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }
    dfs1();
    dfs2(max_element(d1, d1 + n) - d1);
    dfs1(max_element(d2, d2 + n) - d2);
    for(int i = 0; i < n; i++) {
        cout << max(d1[i], d2[i]) << ' ';
    }
    cout << '\n';

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
