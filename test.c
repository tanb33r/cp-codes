#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;
    int n = s.size();
    for (int i=0; i<n ; i++)
    {
        if (s[i] == '?' && s[n-1-i]=='?')
            s[i]= s[n-1-i]='a';
        else if (s[i]=='?')
            s[i]=s[n-1-i];

        else if (s[n-1-i] == '?')
            s[n-1-i] =s[i];
        else if (s[i] !=s[n-1-i])
        {
            cout << -1<< endl;
            return 0;
        }
    }
    cout<<s<<endl;
}
