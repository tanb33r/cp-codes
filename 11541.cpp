#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int t,t2=1;
    string s;
    cin>>t;
    while (t--)
    {
        cin>>s;
        int x = 0;
        char a;
        cout<<"Case "<<t2++<<": ";
        for(int i = 0 ; i< s.size(); )
        {
            if(s[i]>='A' && s[i]<='Z' )
                a = s[i++];

            while(s[i]>='0' && s[i]<='9')
            {
                char b = s[i++];
                x = x*10 + (b-'0');
            }
            while(x--)
                cout<<a;
            x=0;
        }
        cout<<endl;
    }
}
/*
5
A5B4
*/
