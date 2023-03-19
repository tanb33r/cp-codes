#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,a,x,sum,j,k;
    while(cin>>x>>n)
    {
        sum=1;
        while(x)
        {
            sum*=n;
            x=(x/(1+n));
        }
        cout<<sum;
    }
}
