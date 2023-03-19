#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()

{
    int c2=0,c1=0,c3 = 0,i;
    string s,s2 = "";
    cin>>s;
    int len = s.size();
    for (i = 0; i < len; i++)
    {
        if (s.at(i) == '1')
        {
            c1++;
        }
        else if (s.at(i) == '2')
        {
            c2++;
        }
        else if (s.at(i) == '3')
        {
            c3++;
        }
        i++;
    }

    for ( i = 0; i < c1; i++)
    {
        s2 = s2 + '1';
        if (i + 1 < c1 || c2+c3 != 0)
        {
            s2 = s2 + "+";
        }
    }
    for ( i = 0; i < c2; i++)
    {
        s2 = s2 + '2';
        if (i + 1 < c2 || c3 != 0)
        {
            s2 = s2 + "+";
        }
    }
    for ( i = 0; i < c3; i++)
    {
        s2 = s2 + '3';
        if (i + 1 < c3)
        {
            s2 = s2 + "+";
        }
    }
    cout<< s2 << endl;
    return 0;
}


