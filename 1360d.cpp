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
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

int main() {
    fastio;
    w(t) {
        in(n);
        in(k);
        if(n==k) {
            d(1);
            continue;
        }
        if(k==1) {
            d(n);
            continue;
        }
        int i,ans=INT_MAX,nn =  sqrt(n)+1;
        for(i = 1; i<=min(k,nn); i++) {
            if(n%i == 0) {
                if(i <= k) {
                    ans =    min(ans,n/i) ;
                }
                if(n/i <= k) {
                    ans =    min(ans,i) ;
                }
            }
        }
        d(ans);

    }
}

