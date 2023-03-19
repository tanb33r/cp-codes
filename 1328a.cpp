#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) long long int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
    w(t)
    {
        in(a);
        in(b);
        if(a%b == 0)
            d(0);
        else
        {
            int n = a/b;
            n++;
            n*=b;
            d(n-a);
        }
    }
}
