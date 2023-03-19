#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0)
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

ll a[200005],b[500005],c[500005];
ll calu(ll x){
    return (x*(x+1))/2;
}
int main()
{
    fastio;
    ll n,m;
    cin>>n>>m;
    ll mx=0LL;
    ll ans=0LL;
    ff(i,1,n){
        cin>>a[i];
        mx=max(mx,a[i]);
        b[i]=b[i-1]+a[i];
        c[i]=c[i-1]+calu(a[i]);
    }
    for(int i=n+1;i<=2*n;i++){
        b[i]=b[i-1]+a[i-n];
        c[i]=c[i-1]+calu(a[i-n]);
    }
    if(m<=mx){
        while(m--){
            ans+=mx;
            mx--;
        }
        cout<<ans<<endl;
        return 0;
    }
    for(int i=0;i<n; i++){
        auto itr=lower_bound(b+i,(b+2*n),b[i]+m);
        ll temp = *itr - b[i] - m;
        ll temp2 = c[itr-b]-c[i]-calu(temp);
        ans=max(ans,temp2);
    }
    cout<<ans<<endl;
}
