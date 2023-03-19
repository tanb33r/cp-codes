#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,a,b;

    while(t--)
    {
        cin>>n>>a>>b;
        if(n<=a)
        {
            cout<<1<<"\n";
            continue;
        }
        if(b>=a)
        {
            cout<<-1<<"\n";
            continue;
        }

        int c = 1;
        int x = 0;
        while(1)
        {
            x+=a;
            if(x>=n) break;
            x-=b;
            c++;
        }

        cout<<c<<"\n";
    }
}

/*
100
106 9 5

*/
