#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int x,k,m,n,t,b,a;
    while(cin>>n>>k)
    {
        a=n;
        while(n>=k)
        {
            a+=n/k;
            n=n/k+n%k;
        }

        cout<<a<<endl;
    }
}
