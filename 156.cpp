#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int > mm,mmap;
    map<string, string > m;

    string x;
    while(cin >> x, x != "#")
    {
        string s(x); //Disk
        for(int i =0 ; i < x.size(); i++)
            x[i]=tolower(x[i]);
        sort(x.begin(),x.end());

        mmap[x]++;
        m[x] = s;

    }

    for(auto i : mmap) // this basically puts actual strings in another map
        if(mmap[i.first] == 1) //ager map e ekbar thakle == anagram na == ananagrams
            mm[m[i.first]]++;  //originalta boshao

    for(auto it : mm)
        cout<<i.first<<"\n";
}
