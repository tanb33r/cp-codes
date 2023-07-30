#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int ans[n] {};

    for(int i = 0; i < n; i++)
        ans[i] = -1;

    for(int i = 0; i < n; i++) {
        long long x = i;
        long long sq = x*x;
        sq %= n;
        ans[sq] = i;
    }

    for(int i = 0; i < n; i++)
        cout<<ans[i]<<' ';

    cout<<'\n';
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
