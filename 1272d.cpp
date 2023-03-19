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
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {
    fastio;
    in(n);
    vector<int> a(n),b(n,0);
    int x=0,y=1;
    f(i,n) {
        cin>>a[i];
        if(a[i]<=x)
            y = 1;
        b[i] = y++;
        x = a[i];
    }
    x=0;
    for(int i = n-1; ~i ; i--) {
        x = max(x,b[i]);
        if(b[i] == 1) {
            if(i>1)
                if(a[i] > a[i-2]) {
                    b[i] = x + b[i-2];
                }
            if(i>0 and i<n-1)
                if(a[i+1] > a[i-1]) {
                    b[i+1] = x + b[i-1]-1;
                }
            x = 0;
        }
    }
    d(*max_element(all(b)));
}
