/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  fopen              freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
typedef long long           ll;

const int mod = 1000000007;
using namespace std;

int main() {
    fastio;
    in(n);
    in(k);
    ll arr[n+1];
    arr[0]=0;
    f(i,n) {
        in(j);
        arr[i+1]=arr[i]+j;
    }
    vector<ll> v;
    ff(i,k,n)
    v.pb(arr[i]-arr[i-k]);

    ll t, a,b,mx=0ll,ans=0ll;

    f(i,v.size()-k) {
        if(v[i]>mx)
            mx=v[i],t=i+1;
        if(v[i+k]+mx>ans) {
            ans=v[i+k]+mx;
            a=t;
            b=i+k+1;
        }
    }
    cout<<a<<" "<<b<<endl;
}
