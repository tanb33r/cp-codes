#include <bits/stdc++.h>
#include <vector>

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
const int mod = 1e9+7;
const int N = 1e5+7;
ll maxLevel;
void dfs(ll node, ll parent, ll level,
         vector<ll> &currentNodeCount,
         vector<ll> &maxD,
         vector<vector<int>> &v) {

    maxLevel = max(maxLevel, level);
    currentNodeCount[level]++;
    maxD[node] = level;

    for(auto child : v[node]) {
        if(child != parent) {
            dfs(child, node, level+1, currentNodeCount,maxD, v);
            maxD[node] = max(maxD[node], maxD[child]);
        }
    }
}

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> v(n+1);
    maxLevel = 0;

    f(i,n-1) {
        int x, y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    vector<ll> maxD(n+1,0);
    vector<ll> currentNodeCount(n+1,0);
    vector<ll> pref(n+3,0);

    dfs(1, -1, 1, currentNodeCount,maxD, v);

    ff(i,1,n+1)
    pref[maxD[i]]++;

    ff(i,1,n+1) {
        pref[i] += pref[i-1];
        currentNodeCount[i] += currentNodeCount[i-1];
    }

    ll ans = n-1;
    ff(i,1,maxLevel+1) {
        ll del = currentNodeCount[maxLevel] - currentNodeCount[i];
        del += pref[i-1];
        ans = min(ans,del);
    }

    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
