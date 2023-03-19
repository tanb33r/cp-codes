#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0)
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

void solve() {
    int n,m;
    cin>>n;
    int a[n],b[n];
    bool ok1=0,ok2=0,ok=1;
    f(i,n) {
        cin>>a[i];
        if(i and a[i]<a[i-1])
            ok=0;
    }

    f(i,n) {
        in(x);
        x?ok1=1:ok2=1;
    }
    (ok)?ps(Yes):(ok1 and ok2)?ps(Yes):ps(No);
}

int main() {
    fastio;
    int t=1;
    cin>>t;
    while(t--)
        solve();
}





