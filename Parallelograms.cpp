#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d\n",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;

int main()
{
    ll x;
    w(t)
    {

         in(n);
    map<int,int> m;

        f(i,n) // for loop
        {
            sf(x); // scanf
            m[x]++;
        }
        int sum = 0 ;
        for(auto i : m)
            sum+=(i.second/2);


        pf(sum/2); // printf


    }

}
