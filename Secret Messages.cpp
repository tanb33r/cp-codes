#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;

        f(i,s.size())
            if(s[i]>='a' && s[i]<='z')
                s[i]-=32;
            else
                s[i]+=32;
        reverse(s.begin(),s.end());
        f(i,s.size())
        {
            if(s[i]>='a' && s[i]<='z')
                if(s[i]+13<='z')
                    s[i]+=13;
                else
                    s[i]-=13;
            if(s[i]>='A' && s[i]<='Z')
                if (s[i]+13<='Z')
                    s[i]+=13;
                else
                    s[i]-=13;
        }
        cout<<s<<"\n";
    }
}
