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
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr
typedef  long long          ll;

int c,n2,i;
const int mod = 1e9+7;
using namespace std;
vi v;

int check(int n) {
    if(n<2) return 0;
    int l = lower_bound(v.begin(), v.begin() + i, n) - v.begin();
    if(v[l] == n) {
        return 1;
    }
    n-=v[l-1];
    return 1+check(n);
}

int main() {
    fastio;
    int x  = 2;
    int x2  = 5;
    for(i =0;x < mod ;i++) {
        v.pb(x);
        x+=x2;
        x2+=3;
    }
    w(t) {
        in(n);
        d(check(n));
    }
}
