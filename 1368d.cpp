#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pr(x)              cout<<x<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

void solve() {
    in(n);
    int a[n];
    f(i,n) cin>>a[i];
    int bin[20] {0};
    f(i,n) f(j,20) bin[j] += 0 < (a[i]&(1<<j));
    ll ans = 0;
    while(1) {
        ll x = 0;
        f(j,20) {
            if(bin[j]) {
                x|=1<<j;
                bin[j]--;
            }
        }
        ans += x*x;
        if(!x)break;
    }
    pr(ans);
//

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
