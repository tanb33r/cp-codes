#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,c,t,i,n;

    string s;
    while(cin>>n,n)
    {
        c=0;
        s="";
        x=n;
        while(x)
        {
            if(x&1)
                s+="1",c++;
            else
                s+="0";
            x/=2;
        }
        reverse(s.begin(),s.end());
        cout<<"The parity of "<<s<<" is "<<c<<" (mod 2)."<<endl;
    }
    return 0;
}
