#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector< int> v; // 5 6 7 7 6 5 5 6

    int t,p,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        v.push_back(x);
    }
//    sort (v.begin(), v.end()); // 5 5 5 6 6 6 7 7

    vector<int>::iterator lower,upper;

    cin>>p;
    while(p--)
    {
        cin>>x;
//        cout<<x<<"x  \n";



        lower = lower_bound (v.begin(), v.end(), x);
        upper = upper_bound (v.begin(), v.end(), x);
//

        if(lower == v.begin())  cout<<"X ";
        else                  cout <<*--lower<<" ";

        if(upper == v.end())     cout<<"X\n";
        else                  cout <<*upper<<"\n";
        //        cout << v[(upper - v.begin())] << '\n';
    }
    v.clear();
}
