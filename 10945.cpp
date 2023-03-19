
#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<string.h>

int main()
{
    {
        int l,l1,l2,i,j,p1;
        string  s,s1,s2,s3,s4;
       // cout<<'A'-'a';
        while(1)
        {
            getline (cin, s);
            l1=0;

            if(s=="DONE")  break;

            for(i=0; i<s.size(); i++)
            {
                 if(s[i]>='A' && s[i]<='Z' )
                    s[i]+=32;
                 if(s[i]!='.' && s[i]!=',' && s[i]!='?' && s[i]!='!' && s[i]!=' ')
                    s1+=s[i];
            }

//            cout<<s1<<endl;
            p1=s1.size();
            s3=s1;
            reverse(s1.begin(),s1.end());
            if(s1==s3)
                cout<<"You won't be eaten!"<<endl;
            else
                cout<<"Uh oh.."<<endl;
        s.clear();
        s3.clear();
        s1.clear();
        }
    }
}
