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

int main()
{
    in(n);
    in(x);
    map<int, int > m,b;
    int mi = INT_MAX,mx = INT_MIN, a,ans  = 5 ;
    f(i,n)
    {
        cin>>a;
        mi = min(mi,a);
        mx = max(mx,a);
        m[a]++;
        int a2 = a&x;
        mi = min(mi,a2);
        if(a!=a2)
            b[a2]++;
    }
    ff(i,mi,mx)
    {
        if(m[i] >= 2)
        {
            ans = 0;
            break ;
        }
        else if(m[i] == 1 and b[i]>0)
            ans = 1;
        else if(b[i] >= 2)
            ans = min(ans,2);
    }
    if(ans == 5)
        ans = -1;
    cout<<ans<<endl;
}


