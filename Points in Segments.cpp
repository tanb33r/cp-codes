// lower_bound and upper_bound in vector
#include <iostream>
#include <algorithm> // for lower_bound, upper_bound and sort
#include <vector>	 // for vector
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    vector< int> v;

    int t,p,x;
    cin>>t;
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
//
//
//        if(lower == v.begin())  cout<<"X ";
//        else                  cout <<*--lower<<" ";

//        if(upper == v.end())     cout<<"X\n";
//        else                  cout <<*upper<<"\n";
                cout << v[(upper - v.begin())] << '\n';
    }
    v.clear();
}


