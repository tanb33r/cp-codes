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
    in(n);
    int x,a[n+1],b[n+1],ans = 0,m[n+1] = {0},m1[n+1] = {0},m2[n+1] = {0};
    ff(i,1,n) cin>>a[i], m[a[i]] = i;
    ff(i,1,n) cin>>x, m1[x] = i;

    ff(i,1,n) {
        int x = m[a[i]] - m1[a[i]];
        if(x<0) x+=n;
        m2[x]++;
    }
    ff(i,0,n)  ans=max(ans,m2[i]);

    d(ans);

}
int main() {
    fastio;
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
