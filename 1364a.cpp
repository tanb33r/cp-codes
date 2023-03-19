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
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;



void solve() {
    lin(n);
    lin(x);
    ll a[n];
    f(i,n) {
        lin(z);
        a[i] = z%x;
    }

    ll total = 0;

    int flag = 1;
    f(i,n) {
        total += a[i];
        if(a[i]) flag = 0;
    }
    if(flag) {
        d(-1);
        return;
    }

    if(total%x) {
        d(n);
        return;
    }

    int i = 0,j = n-1;

    while(i<=j) {
        if(a[i] or a[j]) {
            d(n-i-1);
            return;
        }
        i++,j--;
    }

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
