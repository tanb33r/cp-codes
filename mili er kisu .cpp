#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;
    int ct=1, t, len, i, j;
    cin>>t;
    getchar();
    while(t--)
    {

        getline(cin,a);
        getline(cin,b);


        if(a==b)
            cout<<"Case "<<ct++<<": Yes"<<endl;

        else
        {
            for(i=0; i<a.size(); i++)
                if(a[i]!=' ')
                    c+=a[i];

            if(b==c)
                cout<<"Case "<<ct++<<": Output Format Error"<<endl;

            else
                cout<<"Case "<<ct++<<": Wrong Answer"<<endl;
        }
          a.clear();
    b.clear();
    c.clear();
    }


    return 0;
}
