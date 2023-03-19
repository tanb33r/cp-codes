#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,k,l,i;
    string s,r;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>s;
        cin>>r;
        if(s.size()!=r.size())

            cout<<"No"<<endl;
        else
        {
            for(i=0; i<s.size() ; i++)
            {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    s[i]='$';
                if(r[i] == 'a' || r[i] == 'e' || r[i] == 'i' || r[i] == 'o' || r[i] == 'u')
                    r[i]='$';
            }
            (s==r)?cout<<"Yes"<<endl:cout<<"No"<<endl;
        }
        s.clear();
        r.clear();
    }
}

