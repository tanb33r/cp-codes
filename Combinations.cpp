#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%lld",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))
#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)
#define mx 1000001
#define mod 1000003
#define vi vector<int>
typedef long long ll;
using namespace std;


ll InverseMod(ll base, ll pow)
{
    if(pow == 0) return 1;

    ll ans = InverseMod(base, pow / 2);

    ans = (ans * ans) % mod;

    if(pow & 1)
    {
        return (ans * base) % mod;
    }
    else
    {
        return ans;
    }
}

ll fecto[mx];
void preFectorial()
{
    fecto[1] = 1;

    for(ll i = 2; i < mx; i++)
        fecto[i] = (fecto[i - 1] * i) % mod;
}

int main()
{


    preFectorial();

    ll num, t = 1, choose;
    w(tt)
    {
        ll choose;

        sc2(num, choose);

        cout << "Case " << t++ << ": ";

        if(num < choose)
        {
            puts("0");
            continue;
        }
        if(num == choose || choose == 0)
        {
            puts("1");
            continue;
        }

        ll upFect = fecto[num];
        ll downFect = ((fecto[num - choose] % mod) * (fecto[choose] % mod)) % mod;

        ll ans = ((upFect) * InverseMod(downFect, mod - 2)) % mod;

        d(ans);
    }

    return 0;
}
