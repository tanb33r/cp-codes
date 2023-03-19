#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

void solve() {
    in(n);
    int a[n+1];
    ll sum = 0,sum2 = 0ll,ans = 0ll;
    f(i,n) {
        cin>>a[i];
        if(!(i&1)) sum += a[i];
    }
    for (int i = 0 ; i<n-1 ; i+=2) {
        sum2 += a[i+1] - a[i];
        (sum2 > 0)?ans = max(ans,sum2):sum2 = 0;
    }
    sum2=0;
    for (int i = 1 ; i<n-1 ; i+=2) {
        sum2 += a[i] - a[i+1];
        (sum2 > 0)?ans = max(ans,sum2):sum2 = 0;
    }
    d(ans=sum);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
