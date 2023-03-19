/**
Tanvir Taher
20-3-2020
*/

#include <bits/stdc++.h>
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define  f(i,n) for(int i=0; i<n; i++)

typedef long long  ll;
using namespace std;

int main()
{
    ll  n, k;
    int t;
    cin>>t;
    f(j,t)
    {
        cin>>n>>k;
        int c=1;

        for(int i = 2 ; i<=n ; i++)
        {
            c+=k;
            c%=i;
            if(c==0)
                c+=i;
        }
        cout<<"Case "<<j+1<<": "<<c<<"\n";
    }
}



/*
500
1 3
2 3
3 3
4 3
5 3
6 3

*/
