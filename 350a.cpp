#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int c[n], w [m];
    int mi = 101,ma = 0 ;
    int mi2 = 101;
    f(i,n)
    {
        cin>>c[i];
        mi = min (mi,c[i]);
        ma = max (ma,c[i]);
    }
    f(i,m)
    {
        cin>>w[i];
        mi2 = min (mi2,w[i]);
    }

    if(2*mi < mi2 && ma < mi2)
        cout<<max(2*mi,ma)<<endl;
    else
        cout<<-1<<endl;
}




