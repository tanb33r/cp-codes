#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int MOD = 1e9+7;
ll power(ll x,int y, int MOD) {



    ll res = 1;
    x = x % MOD;

    while (y > 0) {

        if (y & 1)
            res = (res * x) % MOD;

        y = y >> 1; // y = y/2
        x = (x * x) % MOD;
    }
    return res;
}
ll factorial(ll n,ll k) {
    ll M = 1e9+7;

    ll ans = 1;
    f(i,k) {
        ans = (ans*n) % MOD;
        //	deb(ans);
    }
    return ans;
}


void solve() {
    ll n,m=0,k=0,cnt=0;
    cin>>n>>k;
    ll ans = factorial(n,k);

    pr(ans);

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
