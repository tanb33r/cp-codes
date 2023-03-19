#include<bits/stdc++.h>
using namespace std;
int main()

{
    int c,i;
    string s;
    cin>>c;
    for(i=0; i<c; i++)
    {
        cin>>s;
        int len = s.size();

        if(len < 11) cout<<s<<endl;
        else cout<<s[0]<<len-2<<s[len-1]<<endl;
    }
    return 0;
}
