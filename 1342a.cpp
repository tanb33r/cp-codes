/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
typedef  long long          ll;

const int mod = 1000000007;
using namespace std;

ll input(){ll x; cin >> x; return x;}

void solve(int tc){
    ll x, y, a, b;
    ll ans[10];
    cin >> x >> y >> a >> b;
    ll w=x, z=y;
    ll p = min(w, z);
    w-=p; z-=p;
    ans[0] = (b*p)+(w*a)+(z*a);
    ans[1] = (x*a) + (y*a);


    sort(ans, ans+2);

    d(ans[0]);
}

int main(){

    int tc = 1;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        solve(i);
    }

    return 0;
}
