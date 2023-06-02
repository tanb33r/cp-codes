#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {

    int n,x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin>>x;
        cout<<n-x+1<<' ';
    }
    cout << '\n';

}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

