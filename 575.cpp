#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    long int i,k,m,n,t,b,a;
    string s;
    while(cin>>s)
    {
        if(s=="0")
            break;
        reverse(s.begin(),s.end());
   //     cout<<s<<endl;
        long int sum=0;
        for (i=0; i<s.size(); i++)
        {
            int x = s[i]-'0';
            x=x*(pow(2,i+1)-1);
            sum+=x;
        }
        cout<<sum<<endl;
        s.clear();

    }
}
