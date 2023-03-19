#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,b,c,d;
    (cin>>t);
    while(t--)
    {
        cin>>a>>b;
        n=a;
        if(a<b || (a-b)&1)
            cout<<"impossible"<<endl;
        else
        {
            a/=2;
            if(b&1) b++;
            b/=2;
           // if(n==a+n-(a+b))
                cout<<a+b<<" "<<n-(a+b)<<endl;
               // else cout<<"impossible"<<endl;
        }
    }
}
