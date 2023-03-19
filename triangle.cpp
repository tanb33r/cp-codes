
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main()
{

    ll tc, t = 1;

    sc1(tc);

    while (tc--)
    {
        ll total, num;
        sc1(total);

        vector <ll> vc;
        for(ll i = 0; i < total; i++)
        {
            sc1(num);
            vc.push_back(num);
        }

        sort(vc.begin(), vc.end());

        cout << "Case " << t++ << ": ";
        ll ans = 0;
        for(ll i = 0; i < total; i++)
        {
            for(ll j = i+1; j < total-1; j++)
            {
                ll ues = vc[i] + vc[j] - 1;
                ll inde = upper_bound(vc.begin(), vc.end(), ues) - vc.begin() - 1;
                ans += inde - j;
                //  cout << ans << "  " << inde  << " " << j << " " << inde - j << endl;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
