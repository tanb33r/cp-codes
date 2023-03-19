#include <iostream>
#include <algorithm>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector< int> v; // 5 6 7 7 6 5 5 6

    int t,p,x;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>x;
            v.push_back(x);
        }

        vector<int>::iterator lower,upper;

        cin>>p;
        while(p--)
        {
            cin>>x;



            lower = lower_bound (v.begin(), v.end(), x);
            upper = upper_bound (v.begin(), v.end(), x);

            if(lower == v.begin())  cout<<"X ";
            else                  cout <<*--lower<<" ";

            if(upper == v.end())     cout<<"X\n";
            else                  cout <<*upper<<"\n";
        }
        v.clear();
    }
}

