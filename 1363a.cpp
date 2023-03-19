#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
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

int main() {
    fastio;
    w(t) {
        int x,n,sum = 0,o=0,e=0,k=0;
        cin>>n>>x;
        f(i,n) {
            in(xx);
            sum+=xx;
            (xx&1)?o++:e++;
        }
        k = min(x-1,e);
        if (!(k&1) and k) k--;
        if(x == n)
            cout<<(sum&1?"Yes\n":"No\n");
        else
            cout<<(!(x-k)&1) and (o>=(x-k))?"Yes\n":"No\n");
    }
}
