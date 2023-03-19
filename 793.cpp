#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,c,n;
    cin>>t ;

    while(t--)
    {
        map<string, int > m;
        map<string, int > x;

        int f;
        cin>>f;

        while(f--)
        {

        string s,s2;
        cin>>s>>s2;
        m[s]++,m[s2]++;

        cout<<m[s]+m[s2]<<"\n";
        }




    }
}
