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
    int n, k, z;
    cin>>n>>k>>z;
    int a[n];
    for (int i=1; i<=n; i++) cin>>a[i];

    int res = 0;

    for (int zz=0; zz<=z; zz++) {
        int en = k+1-2*zz;
        if (en <= 0)    continue;

        int ans = 0, best = 0 ;
        for (int i=1; i<=en; i++) ans += a[i], best = max(best, a[i]+a[i+1]);

        ans += best*zz;
        res = max(res, ans);
    }
    cout<<res<<endl;

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

