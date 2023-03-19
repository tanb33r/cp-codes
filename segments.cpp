#include<bits/stdc++.h>
using namespace std;

int main ()
{
    vector< int> p;
    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    vector<int>::iterator l1,l2;

    int t, t2=0, n,q,x,m1,m2;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        while(n--)
        {
            cin>>x;
            p.push_back(x);
        }

        cout<<"Case "<<++t2<<":\n";
        while(q--)
        {
            cin>>m1>>m2;

            l1 = lower_bound (p.begin(), p.end(), m1);
            l2 = upper_bound (p.begin(), p.end(), m2);
            cout<< l2-l1<<"\n";
        }
        p.clear();
    }
}

