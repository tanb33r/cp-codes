#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  n 10000000
typedef long long ll;
using namespace std;


int main()
{

    int  t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int sx = sqrt(x);
        if(y%2 == x%2)
            if(y<=sx)
            {
                cout<<"YES\n";
                continue;
            }
        cout<<"NO\n";
    }

}
