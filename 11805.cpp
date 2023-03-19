#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,x=0,n,k,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        k+=p;
        k%=n;
        if(!k)
            k=n;
        printf("Case %d: %d\n",++x,k);
    }
}

