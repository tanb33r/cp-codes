#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{
    int t;
    cin>>t;
    double n,m, k, p;
    f(i,t)
    {
        cin>> n>>m>>k>>p;
        printf("Case %d: %lf\n",i + 1,p*k*n);
    }
}
