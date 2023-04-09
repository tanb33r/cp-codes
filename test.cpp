#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n,m,x1,y1, x2, y2,value,value2;
    cin >> n >> m >> x1 >> y1 >> x2>> y2;
    value=4;
    value2=4;

    if(x1==1 || x1==n)
        value--;
    if(y1==1 || y1==m)
        value--;
    if(x2==1 || x2==n)
        value2--;
    if(y2==1 || y2==m)
        value2--;
    cout<<min(value,value2)<<endl;
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

