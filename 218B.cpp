#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
using namespace std;
int main()
{
    int n, m ;
    cin>>n>>m;
    vector<int> p(m);
    vector<int> p2(m);
    f(i,m)
    {
        cin>>p[i];
        p2[i]=p[i];
    }
    int c=0;
    int c2=0;
    int n2=n;

    while(n--)
    {
        sort(p.begin(),p.end());
        c+=p[m-1];
        p[m-1]--;
    }

    while(n2--)
    {
        sort(p2.begin(),p2.end());
        int x=0;
        while(!p2[x])
            x++;
        c2+=p2[x];
        p2[x]--;
    }
    cout<<c<<" "<<c2;
}
