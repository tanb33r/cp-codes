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
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  vprint(vec)        for(int i=0; i<vec.size(); i++)cout << vec[i] << " ";cout<<endl
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;
const int mod = 1000000007;

using namespace std;
ll fu(ll j) {
    return (j*(j+1))/2;
}
int main() {
//	fopen;
    fastio;

    in(n);
    ll x  = 0 ;
    ll j  = 1 ;
    while(x<=n) {
        x = fu(j++);
        ll l = 1,r = 1e9,y = 0,k = 0;

        while(l<=r) {
//                deb(k);
            k=(l+r)/2;
            y=fu(k);
            if(x+y == n) {
                yes;
                ret;
            }
            if(x+y > n)
                r = k-1;

            if(x+y < n)
                l = k+1;
        }

    }
    no;
    ret;
}


