#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    int c=1;
    while(getline(cin,s))
    {
        for(int i = 0; i<s.size(); i++)
            if(s[i]=='"')
                if(c++&1)
                    cout<<"``";
                else
                    cout<<"''";
            else
                cout<<s[i];
        cout<<endl;
    }
}
