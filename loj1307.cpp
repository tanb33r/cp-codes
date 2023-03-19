#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)


int main() {

    ll tc, t = 1;

    sc1(tc);

    while (tc--) {
        ll n, num;
        sc1(n);

        vector <ll> vc;
        for(ll i = 0; i < n; i++) {
            sc1(num);
            vc.push_back(num);
        }

        sort(vc.begin(), vc.end());

        cout << "Case " << t++ << ": ";
        ll ans = 0;
        for(ll i = 0; i < n; i++) {
            for(ll j = i+1; j <n-1 ; j++) {
                ll ues = vc[i] + vc[j] - 1;
                ll inde = upper_bound(vc.begin(), vc.end(), ues) - vc.begin() - 1;
                ans += inde - j;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
