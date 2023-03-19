#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr

typedef  long long          ll;
using namespace std;
ll mod = 1e9+7;
ll bigmod(ll a, ll b, ll m) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        long int x = bigmod(a, b / 2, m);
        return (x * x) % m;
    } else return (a % m * bigmod(a, b - 1, m)) % m;
}


void solve() {
    ll n, m, ans;
    cin>>n>>m;
    if(n==1) ans = m%mod;
    else {
        ans = (m*(m-1))%mod;
        if(n>2)
            ans = (ans*bigmod(m-2,n-2,mod))%mod;
    }
    d(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

