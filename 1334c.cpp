#include <bits/stdc++.h>
#define  f(i,n)       for(ll i=0; i<n; i++)
#define  ff(i,j,n)    for(ll i=ll(j);i<=ll(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        prllf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        ll x; cin>>x;
#define  w(t)         ll t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<ll>

typedef long long     ll;

const ll mod = 1000000007;
using namespace std;

int main() {
fastio;

    w(t) {

        in(n);
        ll a[n][2];

        ll ans  = 0 ;
        cin>>a[0][0]>>a[0][1];
        ll mi =  a[0][0];

        ff(i,1,n-1) {


//            scanf("%lld %lld",&a[i][0],&a[i][1]);
            cin>>a[i][0]>>a[i][1];

            if(a[i-1][1]<a[i][0])
                ans += a[i][0] - a[i-1][1] ,   a[i][0] = a[i-1][1] ;

            mi = min(mi, a[i][0]);

        }



        if(a[n-1][1]<a[0][0])
            ans += a[0][0] - a[n-1][1] ,   a[0][0] = a[n-1][1] ;

        mi = min(mi, a[0][0]);

        ans+=mi;
        d(ans);



    }
}

