#include<bits/stdc++.h>
using namespace std;

main()
{
    int test;
    double R, r1, r2, n;
    scanf("%d", &test);
    for (int i = 1; i <= test; i++)
    {
        scanf("%lf %lf", &R, &n);
        r1 = (R * sin(M_PI / n)) / (1 + sin(M_PI / n));
        r2 = (int)r1;
        if (r1 - r2 == 0.0)
        {
            printf("Case %d: %.0lf\n", i, r2);
        }
        else
        {
            printf("Case %d: %.10lf\n", i, r1);
        }
    }
}
