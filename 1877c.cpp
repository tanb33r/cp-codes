#include <bits/stdc++.h>
#define ll                 long long

void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    int x = min(m,n) + m/n - (n<=m);
    int ans[] = {0,1,x,m-x};
    pr(ans[k*(k<=3)]);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
