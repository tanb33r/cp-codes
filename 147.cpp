#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)

const int numCoins = 11;
int coins[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};

const int SIZE = 30005;
long long p[SIZE];
int main()
{
    p[0] = 1;

    f(i,numCoins)
    {
        int e = SIZE - coins[i];
        f(j,e)
            p[j + coins[i]] += p[j] ;
    }

    double f;

      while (scanf("%lf", &f), f > 0.0000001)
        printf("%6.2f%17lld\n", f, p[static_cast<int>(f * 100 + 0.5)]);

}
