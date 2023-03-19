#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{

    w(t)
    {
        in(ss);
        ss--;
        ll b ;
        cin>>b;
        long double n = -1+sqrt(1+8*(double)b); // equation ta

        n/=2;
        ll x = n;
        ll x2 = ceil(n);
        if(x == x2)           // n er value integer kina, integer hole 2 ta b ekshathe
        {
            for(ll i=0; i<ss-n; i++)
                cout<<"a";
            cout<<"bb";
            for(ll i=0; i<n-1; i++)
                cout<<"a";
        }
        else
        {           // na hole ekta b er place jani
            ll c= 0;

            for(ll i=0; i<ss-x2; i++)
                cout<<"a";
            cout<<"b";

            c=ss-x2+1;

            x2 = x2*(x2+1);
            x2/=2;

            for(ll i=0; i<x2-b; i++)
                cout<<"a";
            cout<<"b";

            c+=x2-b;

            for(ll i=0; i<ss-c; i++)
                cout<<"a";
        }
        cout<<"\n";
    }
}
/*



10
20
1
3
6
10
15
*/
