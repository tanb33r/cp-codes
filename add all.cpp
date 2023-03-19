#include <bits/stdc++.h>
#include <vector>
#define ll long long int
using namespace std;
vector <int> vc;
vector <int>:: iterator it;

int main()
{
    int a,n,i,cost,tcost;
    while(cin>>n,n)
    {
        tcost=0;
        for(i=0; i<n; i++)
        {
            cin>>a;
            vc.push_back(a);
        }
        sort(vc.begin(),vc.end());
        it=vc.begin();
        cost = *it;
//cout<<*it<<' '<<cost<<' '<<tcost<<' '<<endl;
        for(it=vc.begin()+1; it!=vc.end(); it++)
        {
            cost += *it;
            tcost += cost;
            //  cout<<*it<<' '<<cost<<' '<<tcost<<' '<<endl;
        }
        cout<<tcost<<endl;

        vc.clear();
    }
}
