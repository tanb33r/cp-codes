#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+5;
int t,n,m,f[maxn];
int _find(int x) {
    return x==f[x]?x:f[x]=_find(f[x]);
}
int solve() {
    cin>>n>>m;
    for(int i=1; i<=n; i++)f[i]=i;
    int ans=0,x,y;
    while(m--) {
        cin>>x>>y;
        if(x==y)continue;
        ans++;
        if(_find(x)==_find(y))ans++;
        f[_find(y)]=_find(x);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
