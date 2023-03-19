#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    fastio;
    ll n,v;
    cin>>n>>v;
    ll prev=0;
    ll cnt[3005]={0};
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        cnt[x]+=y;
    }
    ll cur=0;
    ll ans=0;
    for(int i=1;i<3005;i++)
    {
        ll k=v;
        cur=cnt[i];
        ans+=min(prev,k);
        k -= min(prev,k);
        ans+=min(cur,k);
        cur-=min(cur,k);
        prev=cur;
    }
    cout<<ans;
}
