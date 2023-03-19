#include<stdio.h>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,a,b,c,n,e,d;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;

        e=c*(2*a-b)/(a+b);
        e=floor(e);
        (e<0)?cout<<"0"<<endl:cout<<e<<endl;
    }
    return 0;
}
