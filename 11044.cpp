#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  x,t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        m-=2;
        n-=2;
        if(m%3==0)
            x=m/3;
        else
            x=m/3+1;
        n-=3;
        if(n%3==0)
            x+=x*(n/3);
        else
            x+=x*(n/3+1);
        cout<<x<<endl;

    }
}

