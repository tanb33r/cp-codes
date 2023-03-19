#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,t;
    cin>>t;
    while(t--)
    {
        cin>>r;
        if(r==2)
            cout<<2<<endl;
        else
            (r&1)? cout<<1<<endl: cout<<0<<endl;
    }
}


