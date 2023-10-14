
int N = 1e6;
vector<int>g[N];
f(i,m) {
    int x = II-1,y = II-1;
    g[x].pb(y);
    g[y].pb(x);
}

int N = 1e6;
vector<pair<ll,ll>>g[N];
f(i,m) {
    int x = II-1,y = II-1;
    g[x].pb({y,e});
    g[y].pb({x,e});
}
