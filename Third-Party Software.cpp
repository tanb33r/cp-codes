#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n) for(int i=j; i<n; i++)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define vi vector<int>
typedef long long ll;
using namespace std;
vector<pair<int,int>> veca;
vector<ll> v;
ll k, n,l,a,b,t;

int main()
{

    cin>>n;
    t=n;
    while(t--)
    {
        cin>>a>>b;
        veca.push_back(make_pair(b,a));
    }
    sort(veca.begin(),veca.end());
    l=0;

    for(ll i = 0 ; i< n ; i++)
        if(veca[i].second>l)
            l=veca[i].first,v.push_back(l);


    k=v.size();
    cout<<k<<"\n"<<v[0];
    ff(i,1,k)
    cout<<" "<<v[i];
    puts("");

}














