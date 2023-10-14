#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
///typedef __int128 lll;

const long long N = 2e5 + 50;
const long long MOD = 1e9 + 7;
const long long MODD = 998244353;
const long long INF=1e17 + 10;
const int IINF=1e9 + 10;

vector<ll> g[N], child(N);
void dfs(ll u, ll par){
    if(u != 1 && g[u].size() == 1){
        child[u]=1;
        return;
    }
    for(ll v : g[u]){
        if(v == par)continue;
        dfs(v, u);
        child[u] += child[v];
    }
}
void solve(){
    ll n;
    cin>>n;
    for(ll i=0; i<n+5; i++){
        g[i].clear();
        child[i]=0;
    }
    for(ll i=1; i<n; i++){
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, -1);
    ll q;
    cin>>q;
    while(q--){
        ll x, y;
        cin>>x>>y;
        ll ans = child[x]*child[y];
        cout<<ans<<"\n";
    }
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++){
        //cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;
}
