#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {

    fastio;
    in(n);
    in(s);
    if(n*2>s) {
        no;
        return 0;
    }
    yes;
    f(i,n-1) {
        cout<<2<<" ";
        s -= 2;
    }
    d(s);
    d(1);
}
