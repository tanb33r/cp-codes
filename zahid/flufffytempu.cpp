#include<bits/stdc++.h>
#define  ll long long
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"


using namespace std;
void solve() {
    int x,y;
    cin>>x>>y;
    int n = y-x;
    deb(n);
    deb(ceil(n/10.0));
    if(x>=y)cout<<0<<endl;
    else cout<<ceil(n/10.0)<<endl;

    // 84 90

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--) {
        solve();
    }
}
