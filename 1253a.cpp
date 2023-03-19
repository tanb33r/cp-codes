#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
    w(t)
    {
        in(n);
        int a[n];
        int b[n];

        f(i,n)
        sf(a[i]);
        int x;
        f(i,n)
        {
            sf(x);
            b[i] = x - a[i] ;
        }
        int i=0,j=n-1;
        while(b[i]==0 && i<n)
            i++;
        while(b[j]==0 && j>0)
            j--;

        x = b[i];

        if(x<0)
        {
            puts("NO");
            continue;
        }

        int p = 1;
        for( ; i<=j; i++)
            if(b[i]!= x)
            {
                p=0;
                break;
            }
        puts((p)?"YES":"NO");
//        cout<<((p)?"YES\n":"NO\n");
    }
}

