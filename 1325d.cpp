#include <bits/stdc++.h>
using namespace std;
int solve() {
    long long u,v;
    cin>>u>>v;
    if(u%2!=v%2 || u>v) {
        cout<<"-1\n";
        return 0;
    }
    if (u==v) {
    if (u) cout<<1<<" "<<u<<"\n";
        else cout<<"0\n";
        return 0;
    }
    long long x=(v-u)/2;
    if (u&x)
    cout<<3<<"\n"<<u<<" "<<x<<" "<<x<<"\n";
    else
        cout<<2<<"\n"<<(u^x)<<" "<<x<<"\n";
    }

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
