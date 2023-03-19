#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll i,j,k,c=0;

    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            ll t=i*i+j*j;
            ll x=sqrt(t);
            if(x*x==t&&x<=n)
            {
                c++;
            }
        }
    }
    cout<<c;
    if
}
