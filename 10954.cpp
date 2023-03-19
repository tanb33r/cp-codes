#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cost,a;
    while(cin>>n,n)
    {
        priority_queue<int, vector<int>, greater<int> >vc;
        while(n--)
        {
            cin>>a;
            vc.push(a);
        }
        int tcost=0;
        while (vc.size() > 1)
        {
            cost=vc.top();
            vc.pop();
            cost+=vc.top();
            vc.pop();
            vc.push(cost);
            tcost += cost;
        }
        cout<<tcost<<endl;
    }
}
