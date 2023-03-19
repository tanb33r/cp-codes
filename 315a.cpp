#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
using namespace std;

int main()
{

    in(n);
    vector<int> a(n), b(n);
    map<int,int> m;
    f(i,n)
    {
        cin>>a[i]>>b[i];
        m[b[i]]++;
    }
    int c =0 ;
    f(i,n)
    {
        if(a[i]==b[i])
        {
            if(m[a[i]]<=1)
                c++;
        }
        else
        {
            if(m[a[i]]==0)
                c++;
        }
    }
    cout<<c<<"\n";
}

