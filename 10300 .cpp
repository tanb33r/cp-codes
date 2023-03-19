#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,f,s,a,e,i;
    long long sum;
    cin>>t;
    while(t--)
    {
        cin>>f;
        sum=0;
        for(i=0; i<f; i++)
            cin>>s>>a>>e,sum+=(long long)s*e;
        cout<<sum<<endl;
    }
}
