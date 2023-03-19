#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;

int main()
{
    long long int w,o,e;
    int n,t, c;
    cin>> t ;

    f(c,t)
    {
        cin>>n;
        int a;
        map<int,int> x;
        int ans = 0;
        f(i,n)
        {
            sf(a);
            if(x[a]==0)
                ans+=a+1,x[a]++;


        }


        printf("Case %d: %d\n",c+1,ans);
    }
}
