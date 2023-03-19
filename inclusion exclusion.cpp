#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
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

// how many numbers cant be divisible by any of the array
int main()
{
    int num[] = {2,3,5};
    int res = 0;
    int day = 1000;
    int n = 3;
    for(int i = 1; i<(1<<n); i++)
      {
        int ic = i ;
        int d = 1, cnt = 0, bit = 0;
        while(ic != 0)
        {
            if(ic&1)
                d=lcm(d,num[bit]),cnt++;
            bit++;
            ic>>=1;
        }

        if(cnt&1)
            res += (day/d);
        else
            res -= (day/d);
    }
    cout<<day-res;
}
