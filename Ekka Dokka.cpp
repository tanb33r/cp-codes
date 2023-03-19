#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{
    long long int w,o,e;
    int t, c;
    cin>> t ;
    f(c,t)
    {
        scanf("%lld",&w);

        if(w&1)
        {
            printf("Case %d: Impossible\n",c+1);
            continue;
        }
        o = w/2;
        e = 2 ;
        while(o % 2 == 0)
            o/=2,e*=2;

        printf("Case %d: %lld %lld\n",c+1, o, e);
    }
}
