#include <bits/stdc++.h>
#define  w(t)               int t; cin>>t; while(t--)
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main() {
    fastio;
    w(t) {
        int n,k;
        cin>>n>>k;
        int ans = k ;
        while(k>=n)
            ans+=k/n, k=k/n+k%n;
        cout<<ans<<endl;
    }
}
