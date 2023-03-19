#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int> c ;
    map <string,int>::iterator i ;
    string s,x;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        getline(cin,x);
        c[s]++;
    }
    for(auto i:c)
        cout<<i.first<<" "<<i.second<<endl;
}


