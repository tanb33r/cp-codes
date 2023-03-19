#include<bits/stdc++.h>
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    Fast;
    long long n,m,t,i,j,k,x,y,z,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<long long,long long> >v;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            v.push_back({x,y});
        }
        int ok=1;
        if(v[0].first<v[0].second)
        {
            ok=0;
        }
        for(int i=1;i<n;i++)
        {
            if(v[i].first<v[i-1].first || v[i].second<v[i-1].second)
            {
                ok=0;
            }
            if(v[i].first<v[i].second)
            {
                ok=0;
            }
            if(v[i].second>v[i-1].second && v[i].first<=v[i-1].first)
            {
                ok=0;
            }
        }
        if(ok==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

/*


1
3
0 0
1 0
2 2

*/
