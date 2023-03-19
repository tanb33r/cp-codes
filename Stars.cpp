#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  MOD 1e9+7
using namespace std;


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}


int main()
{
    int t,ans,c;
    long  x,y,x1,y1,a,b;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>x1>>y1;
        a = abs(x1-x);
        b = abs(y-y1);
        ans = gcd(a,b)+1;
        cout<<ans<<"\n";
    }
}
