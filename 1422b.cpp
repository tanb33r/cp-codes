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
    in(m);
    int a[n][m];
    f(i,n)
    f(ii,m)
    cin>>a[i][ii];
    ll ans = 0ll;
    f(i,n/2+(n&1))
    f(ii,m/2+(m&1)) {
        if(i == n/2 and ii == m/2)continue;
        else if(i == n/2)
            ans += abs(a[i][ii]-a[i][m-ii-1]);
        else if(ii == m/2)
            ans += abs(a[i][ii]-a[n-i-1][ii]);
        else {
            int ar[] = {a[i][ii], a[n-i-1][m-ii-1],a[i][m-ii-1],a[n-i-1][ii]};
            sort(ar,ar+4);
            ans += abs(a[i][ii]-ar[1])+ abs(a[n-i-1][m-ii-1]-ar[1]) +abs(a[i][m-ii-1]-ar[1]) +abs(a[n-i-1][ii]-ar[1]);
        }
    }
    d(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
