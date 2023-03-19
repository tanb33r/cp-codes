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
#define fopen freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define fastio ios::sync_with_stdio(0),cin.tie(0)
#define PI acos(-1.0)
#define all(v) (v).begin(),(v).end()
#define mem(a,value) memset(a,value,sizeof(a))

#define vi vector<int>
typedef long long ll;
using namespace std;


ll cf(int n, int x)
{

    if(x>n)
        return 0;
    ll ans = 1 ;

    for(ll i = x+1 ; i<=n; i++)
    {
        ans*=i,ans/=(i-x);
        // cout<<ans<<endl;}
    }
    return ans;

}

int main()
{
    int n, m,t;
    cin>>n>>m>>t;
    ll ans = 0;
    ff(i,4,t-1)
    {
        ans+=cf(n,i)*cf(m,t-i);
        // cout<<ans<<endl;
    }
    cout<<ans;
}

