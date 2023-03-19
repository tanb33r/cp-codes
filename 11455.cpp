#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,b,c,d;
    (cin>>t);
    while(t--)
    {
        n=0;
        cin>>a>>b>>c>>d;
        if (!a || !b || !c || !d )
            cout<<"banana"<<endl;
         if(a==b && b==c && c==d)
            cout<<"square"<<endl;
        else  if((a==b && c==d) || (a==d && b==c) || (a==c && b==d))
            cout<<"rectangle"<<endl;
        else if(a<b+c+d && b<a+c+d && c<b+a+d && d<b+c+a)
            cout<<"quadrangle"<<endl;
        else
            cout<<"banana"<<endl;
    }
}

