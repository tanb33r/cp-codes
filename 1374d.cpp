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
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<"\n"
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

void solve() {
    int n, k, b;
    cin>>n>>k;
    int a[n];
    f(i,n) cin >> a[i];
    map<int, int> cnt;
    int mx = 0;
    f(i,n)
        if (b = a[i]%k) mx = max(mx, ++cnt[k - b]);
    ll ans = 0;
    for(auto [key, v] : cnt)
        if(v == mx)
            ans = k * 1ll * (v - 1) + key + 1;
    d(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
