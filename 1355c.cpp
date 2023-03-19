#include<bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

typedef  long long          ll;
int main() {
    ll a,b,c,d;
    ll ans=0LL;
    cin>>a>>b>>c>>d;
    ll t=max(a+b,c);
    ll r=c+d;
    for(ll i=t; i<=r; i++) {
        ll t2=(i-a-b+1LL-max((i-(2*b)),0LL)-max(i-a-c,0LL)+max(i-b-c-1LL,0LL));
        ans+=(t2*min(i-c,d-c+1LL));
    }
    cout<<ans<<endl;
}
