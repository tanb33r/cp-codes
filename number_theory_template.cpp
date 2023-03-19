
/**
 *    Topic:   Number Theory
 *    Author:  Sk.Amir Hamza
 *    Created: 10.08.2018
**/

#include<bits/stdc++.h>
#define MOD 1000000007
#define MAX 10000007
using namespace std;

typedef long long ll;

ll fac[MAX];

struct number_theory
{

    number_theory();
    ll bigmod(ll n,ll k);
    ll modinv(ll n);
    ll nPr(ll n,ll p);
    ll nCr(ll n,ll p);
    ll mod_number(ll num,ll mod=MOD);

};

number_theory::number_theory()
{
    fac[0]=1;
    for(int i=1; i<=MAX-5; i++)
        fac[i]=((fac[i-1]%MOD)*i)%MOD;
}

ll number_theory::bigmod(ll n,ll k)
{
    return ((k==0)?1:((k&1)?n:1)*bigmod(n*n,k/2)%MOD)%MOD;
}

ll number_theory::modinv(ll n)
{
    return bigmod(n,MOD-2);
}

ll number_theory::nPr(ll n,ll p)
{
    return ((fac[n]%MOD)*(modinv(fac[p])%MOD))%MOD;
}

ll number_theory::nCr(ll n,ll p)
{
    return ((nPr(n,p)%MOD)*modinv(fac[n-p])%MOD)%MOD;
}

ll number_theory::mod_number(ll num,ll mod)
{
    return (num % mod + mod) % mod;
}


int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);

    number_theory ntheory;
    ll n,t,i,m,k,res;
    cout << ntheory.bigmod(5,30000) << "\n";
    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> n >> m >> k;
        res=(n<k)?0:((ntheory.bigmod(m,k)%MOD)*(ntheory.nCr(n,k))%MOD)%MOD;
        cout << res << "\n";
    }

    return 0;
}
