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
typedef  long long          ll;

int solve() {
    int n, m;
    cin>>n>>m;
    pair<int, int> g[220];
    f(i,m) {
        int a, b;
        cin>>a>>b;
        g[i] = make_pair(a, b);
    }
    int ans = 1;
    f(i,m)
    if(g[i].first == 1 && g[i].second == n) {
        ans = 0;
        break;
    }
    cout<<(ans?"Khal Drogo\n":"Jorah Mormont\n");
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}




