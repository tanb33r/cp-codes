#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
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
#define  vprint(vec)        for(int I=0; I<vec.size(); I++)cout << vec[I] << " ";cout<<endl
#define  mem(a,value)       memset(a,value,sizeof(a))

using namespace std;
int main() {
    fastio;
    w(t) {
        in(n);
        in(m);
        if(n==1) {
            d(0);
            continue;
        }
        if(n==2) {
            d(m);
            continue;
        }
        d(2*m);
    }


}
