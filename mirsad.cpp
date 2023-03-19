#include<bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/PREFNUM
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t,x,y,a=1,aa=0,xx,z,p,q,r;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        aa=0;
        a=1;
        if(x%y==0)
        {
            cout<<x<<endl;
        }
        else
        {
            while(x<=pow(10,17))
            {
                x=x*10;
                a=a*10;
                z=x%y;
                xx=y-z;
                if(x%y==0)
                {
                    aa=1;
                    break;
                }
                if(xx<a)
                {
                    x=x+xx;
                    aa=1;
                    break;
                }
            }
            if(aa==0 || (x>pow(10,18)))
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<x<<endl;
            }
        }
    }
}