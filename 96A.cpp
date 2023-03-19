#include<bits/stdc++.h>
using namespace std;
int main()

{
    int c0=0,c1=0,i;
    string s;
    //cin>>c;
    cin>>s;
    int len = s.size();
    for(i=0; i<len; i++)
    {
        if(s[i]=='0')
        {
            c0++;
            c1=0;
            if(c0==7)
            {
                cout<< "YES" << endl;
                return 0;
            }
        }

        if(s[i]=='1')
        {
            c0=0;
            c1++;
            if(c1==7)
            {
                cout<< "YES" << endl;
                return 0;
            }
        }
    }
    cout<< "NO" << endl;
    return 0;
}

