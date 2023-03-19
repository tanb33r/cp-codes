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
    int a[n];
    bool b[200];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    int m1=0, m2 = INT_MAX;
    f(i,n) {
        cin>>a[i];
        b[a[i]]=1;
        m1 = max(m1,a[i]);
        m2 = min(m2,a[i]);
    }
    for(int i = m2; i<=m1; i++)
        if(!b[i]) {
            ps(NO);
            return;
        }
    ps(YES);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
