#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int t,i,j,m,k,l,c=1,ans,r;
    cin>>t;
    while(t--)
    {
        v.push_back(0);
        k=0;
        cin>>l;
        while(l--)
        {
            cin>>r;
            v.push_back(r);
        }
        for(i=1; i<v.size(); i++)
        {
            m=v.at(i)-v.at(i-1);
            if(k<m) k=m;
            //  else if(k==m) k++;
        }

        ans = k;
        for(i = 1; i < v.size(); i++)
        {
            if(v.at(i)-v.at(i-1) == k)
                k--;
            else if(v.at(i)-v.at(i-1) > k)
            {
                ans++;
                break;
            }
        }
        v.clear();
        cout<<"Case "<<c++<<": "<<ans<<endl;
    }
}

