#include <bits/stdc++.h>
#define  endl               "\n"
typedef  long long          ll;
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    (n*2>k)?cout<<-1<<" "<<-1<<endl:cout<<n<<" "<<2*n<<endl;
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
