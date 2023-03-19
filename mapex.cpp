#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> c ;
    map<int, int>::iterator itr;

    int s,x;
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cin>>s;
        // getline(cin,x);
        c[s]++;
    }

    for (itr = c.begin(); itr != c.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
        /* for(auto i:c)
             cout<<i.first<<" "<<i.second<<endl;*/

    }
}
//10420 uva


