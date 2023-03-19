
#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%lld",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
#define pii pair<int,int>
typedef long long ll;
using namespace std;

typedef struct Node
{
    ll x;
    ll y;
    ll ca;
} NODE;

int cmp(NODE aa,NODE bb)
{
    return aa.ca>bb.ca;
}


ll re  = 0;
ll lagbo = 0;
ll maxx  = 0;
int main()
{
    ll n;

    cin >> n;
    NODE a[n];

    mem(a,0);

    for(int i=0; i<n; i++)
    {
        cin>> a[i].x >> a[i].y ;
        a[i].ca  =  a[i].x-a[i].y;
    }
    sort(a,a+n,cmp);

    for(int i=0; i<n; i++)
    {
        if(lagbo<a[i].x)
        {
            re  += a[i].x - lagbo;
            lagbo = a[i].x;
        }
        lagbo -= a[i].y;
    }
    cout << re <<endl;
    return 0;
}

