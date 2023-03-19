#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
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

set<ll> at[3];

void solve() {
    int n ,k;
	cin>>n>>k;

	ll ans = 1e12;
	for (ll i = 1; i <= k; i++) {
		ans = min(ans, *at[i].lower_bound(n));
	}
	cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;

	for (ll d = 1; d <= 9; d++) {
		ll r = 0;
		for (ll i = 0; i < 12; i++) {
			r = 10 * r + d;
			at[1].insert(r);
		}
	}

	for (ll d = 0; d <= 9; d++) {
		for (ll e = d + 1; e <= 9; e++) {
			for (ll k = 0; k < 11; k++) {
				for (ll i = 0; i < (1 << k); i++) {
					ll r = 0;
					for (ll j = 0; j < k; j++) {
						ll v = (((i >> j) & 1) ? d : e);

						r = 10 * r + v;
					}
					at[2].insert(r);
				}
			}
		}
	}

    while(t--)
        solve();
}
