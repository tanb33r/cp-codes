#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n,cnt = 0;
    cin>>n;
    vector<long long>a;
    long long x,ans=1ll;
    for(int i=0; i<n; i++) {
        cin>>x;
        a.push_back(x);
        if(x>0)cnt++;
    }
    sort(a.begin(),a.end()); ;
    if(n-- and cnt) {
        ans = a.back();
        ans *= (a[0]*a[1] >= a[n-1]*a[n-2])?a[0]*a[1]*max(a[2]*a[3],a[n-1]*a[n-2]):a[n-1]*a[n-2]*max(a[1]*a[0],a[n-3]*a[n-4]);
    } else ans*=a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n];
    cout<<ans<<"\n";
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
