#include <bits/stdc++.h>
#define  f(i,n) for(int i=0; i<n; i++)
#define  ff(i,j,n)  for(int i=int(j);i<=int(n);++i)
#define  sf(i) scanf("%d",&i)
#define  pf(i) printf("%d",i)
#define pb(x) push_back(x);
#define in(x) int x; cin>>x;
#define w(t)  int t; cin>>t; while(t--)
#define d(x)  cout<<x<<"\n"
#define endl "\n"
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))
#define vi vector<int>
const int mod =  1e9+7;
typedef long long ll;
using namespace std;

bool cmp(int a, int b)
{
    return a>b ;
}

int main()
{
    w(t)
    {
        in(n);
        int a[n],x=0;
        f(i,n)
        cin>>a[i];
        sort(a,a+n,cmp);
//        f(i,n)
//        cout<<a[i]<<" ";

        f(i,n)
        {
            while(a[i]==0) i++;
            a[i] = a[i]-i;
            if(a[i]<0)
                a[i] = 0;
        }
        int j=0;
        while(a[j]==0) j++;
        ff(i,j,n-1)
        {
            x=(x + a[i]) % mod;
        }
        d(x);
    }
}
