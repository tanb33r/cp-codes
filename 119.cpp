#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i = 0;
    map <string,int> mp;
    vector<string>v;
    map<string, int>::iterator itr;
    string s;
    int p;
    int coun = 0;
    while (cin>>p)
    {
        if(coun)
            cout << endl;
        coun++;
        int x=p;
        while(x--)
        {
            cin>>s;
            v.push_back(s);
            mp.insert(pair<string, int>(s,0));

        }
        x=p;
        while(x--)
        {
            cin>>s;
            cin>>t; // taka
            int k;
            cin>>k; //
            if(k)
            {
                int t2 = t-(t%k);
                mp[s]-=t2;
                int k2 = k;
                while(k2--)
                {
                    string s2;
                    cin>>s2;
                    mp[s2]+=(t/k);
                    s2.clear();
                }
            }
        }
        for ( int i=0; i<v.size(); i++)
            cout <<v[i] << " " << mp[v[i]]<< '\n';
        mp.clear();
        s.clear();
        v.clear();
    }
}

