#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            f(I,(v).size())cout<<v[I]<<" ";cout<<"\n"
#define  AI(a,n)            f(I,n)a[I]=II;
#define  AO(a,n)            f(I,n)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  vpr(x)             return void(pr(x))
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX = 2e5+5;

vector< vector<int> > cycles;

int n;
vector<char> used;
vector<int> path;
vector<int> a, c;

void dfs(int v) {
    path.pb(v);
    used[v]=1;
    int to = a[v];
    if(used[to] != 2) {
        if(used[to]==1) {
            cycles.eb;
            int id = (int)path.size() - 1;
            while(path[id] != to)
                cycles.back.pb(path[id--]);
            cycles.back.pb(to);
        } else dfs(to);
    }
    path.pop_back();
    used[v] = 2;



}
void solve() {

    cin>>n;
    f(i, n) cin>>c[i];
    f(i, n) {
        cin>>a[i];
        a[i]--;
    }

    f(i, n) {
        if (!used[i])
            dfs(i);
    }

    ll ans = 0;
    for(auto &cur : cycles) {
        int mn = c[cur[0]];
        for(int v : cur)
            mn = min(mn, c[v]);
        ans += mn;
    }
    cout << ans << endl;


}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
