#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c=1;
    while(getline(cin,s))
    {
        for(int i = 0;i<s.size();i++)
        {
            char x = s.at(i)-7;
            cout<<(x);
        }
        cout<<endl;
    }
}

