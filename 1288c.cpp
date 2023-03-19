
/*--ILRS-- sr4saurabh  */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define pb push_back
#define pop pop_back
#define mp make_pair
#define ve vector
#define vii vector < int >
#define vll vector < ll >
#define pii pair < int , int >
#define pll pair < ll , ll >
#define vpl vector < pll >
#define fi first
#define sz size
#define len length
#define se second
#define M_PI           3.14159265358979323846
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)

const ll mod = 1000000000+7;
const ll N=10000000+6;

ll modInverse(ll a,ll m) {
    ll m0=m;
    ll y=0,x=1;
    if(m == 1)return 0;
    while(a > 1) {
        ll q=a/m;
        ll t=m;
        m=a%m,a=t;
        t=y;
        y=x-q*y;
        x=t;
    }
    if(x<0)x+=m0;
    return x;
}
ll factmod(ll n) {
    ll v=1;
    ff(i,1,n)
    v=(v*i)%mod;
    return v;
}

int main() {
    fastio;
    lin(n);
    lin(m);
    ll num=factmod(n+2*m-1);
    ll denom=modInverse((factmod(n-1)*factmod(2*m))%mod,mod);
    cout<<(num*denom)%mod;

    return 0;
}
