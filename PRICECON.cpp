#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define fast ios::sync_with_stdio(0),cin.tie(0);
ll big =1ll<<60;
void solve(){
    ll n,m,cnt=0,cnt2=0;
    cin>>n>>m;
    ll s[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++) cin>>s[i][j];
        for(ll j=0;j<m;j++){
            if(s[i][j]==1) break;
            if(j==m-1) cnt++;
        }
    }
    for(ll j=0;j<m;j++){
        for(ll i=0;i<n;i++){
            if(s[i][j]==1) break;
            if(i==n-1) cnt2++;
        }
    }
     cout<<((min(cnt,cnt2)%2)?"Ashish\n":"Vivek\n");
}
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
}
