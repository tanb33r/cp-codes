#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

const int N = 2e5 + 10;
ll a[N];
void solve() {
    ll n;
    cin >> n;
    ff(i,1,n+1)
    cin>>a[i];

    ll ans = 1, g = 0, pos = 0;
    for(int i = 2; i <= n; i++) {
        g = __gcd(g, abs(a[i]-a[i-1]));

        if(g > 1) {
            ans = max(ans, i - pos);
        } else {
            g = 0;
            ll s = 0;
            pos = i;
            while(pos > 0 && g != 1) {
                s = g;
                g = __gcd(g, abs(a[pos] - a[pos - 1]));
                pos -- ;
            }
            g = s;
        }
    }
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

