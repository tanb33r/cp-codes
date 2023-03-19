#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
typedef long long ll;
using namespace std;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a, b);
}


int main()
{

    in(t)
    f(i,t)
    {

        in(day);
        in(m);
        vector<int> num(m);

        f(j,m)
        cin>>num[j];

        ll res = 0;
        int n = m;
        for(int i = 1; i<(1<<n); i++)
        {
            int ic = i ;
            ll d = 1, cnt = 0, bit = 0;
            while(ic != 0)
            {
                if(ic&1)
                    d=lcm(d,num[bit]),cnt++;
//                    d*=num[bit],cnt++;
                bit++;
                ic/=2;
            }

            if(cnt&1)
                res += (day/d);
            else
                res -= (day/d);
        }
        cout<<"Case "<<i+1<<": "<<day-res<<"\n";
    }
}

