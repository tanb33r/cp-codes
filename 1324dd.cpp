#include <bits/stdc++.h>
#define  f(i,n) for(ll i=0; i<n; i++)
#define  ff(i,j,n) for(ll i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) prllf("%d",i)
#define pb(x) push_back(x);
#define in(x) ll x; cin>>x;
#define w(t)  ll t; cin>>t; while(t--)
typedef long long ll;
using namespace std;

int main()
{
    in(n);
    vector<ll> a(n);
    f(i,n)
    cin>>a[i];
    f(i,n)
    {
        in(x);
        a[i] -= x;
    }
    sort(a.begin(),a.end());
    ll sum =0;
    f(i,n)
    {
        ll x;
        if(a[i]<=0)
        {
            x = -a[i]+1;
            ll l = lower_bound(a.begin()+i, a.end(),x)- a.begin();
            sum+=(n-l);
        }
        else sum+= (n-i-1);
    }
    cout<<sum<<"\n";

}
