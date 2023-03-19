#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
int n[123];
int main()
{
    string s;
    int m = 0;
    int t;
    cin>>t;
    while(t--)
    {
//        getline(cin,s);
      //  gets(s);
        getline(cin>>ws,s);
        for(int i = 0; i<s.size(); i++)
        {
            char x = s.at(i);
            if(x >= 'A' && x <= 'Z')
                n[x+32]++;
            else if(x >= 'a' && x <= 'z')
                n[x]++;

        }
        for(int i = 'a'; i<='z'; i++)
        {
            if(m<n[i])
                m = n[i];
        }
        for(int i = 'a'; i<='z'; i++)
        {
            if(m==n[i])
                printf("%c",i);
        }
        cout<<endl;
        for(int i = 'a'; i<='z'; i++)
                n[i]=0;
        m=0;
    }

}
