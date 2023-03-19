#include <bits/stdc++.h>
using namespace std;
int c(int x)
{
    x*=2;
    if(x>9)
        return ((x/10)+(x%10));
    else
        return x;
}

int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        int d1=0,d2=0;
        int q=4;
        while(q--)
        {
            cin>>s;
            d1+=c(s[0]-'0');
            d1+=c(s[2]-'0');
            d2+=s[1]-'0';
            d2+=s[3]-'0';
        }
        ((d1+d2)%10==0)?cout<<"Valid"<<endl:cout<<"Invalid"<<endl;
    }
}

