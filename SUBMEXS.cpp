#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

int N = 1e5+7;
ll ans;
vector<ll> v;
vector<long long> subtree;
vector<vector<int>> graph;

ll computeSubtree( int node, int parent) {
    subtree[node] = 1;
    for(auto i : graph[node]) {
        if(i == parent) continue;
        subtree[node] += computeSubtree(i, node);
    }
    return subtree[node];
}

void dfs(int node, int parent, ll sum) {
    ll val = sum +subtree[node];
    int child = 0;
    for(auto i : graph[node]) {
        if(i == parent) continue;
        child++;
        dfs(i,node, val);
    }

    ans = max(ans, val);
}

void solve() {
    cin >> N;
    ans = 0;
    graph.clear();
    subtree.assign(N+1, 0);
    graph.resize(N+1);
    for(int i = 2; i <= N; i ++) {
        int a = i, b;
        cin >> b;
        graph[a].pb(b);
        graph[b].pb(a);
    }
    computeSubtree(1, 0);
    dfs(1, 1, 0);

    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
