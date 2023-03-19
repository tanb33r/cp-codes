#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
using namespace std;

int main()
{
    w(t)
    {
        in(n);

        vector <int > a(n);
        vector <int > b;
        int  k = 1;
        f(i,n)
        {
            cin>>a[i];
            a[i]%=2;
        }

        f(i,n)
        if(a[i] == 0)
        {
            cout<<1<<"\n"<<i+1<<"\n";
            k=0;
            break;
        }

        int c =0;
        if(k)
        {
            f(i,n)
            if(a[i] == 1)
            {
                c++;
                b.pb(i+1);
                if(c==2)
                {
                    k=0;
                    break;
                }
            }
            if(!k)
            cout<<2<<"\n"<<b[0]<<" "<<b[1]<<"\n";
        }

        if(k)
            cout<<-1<<"\n";
    }
}

