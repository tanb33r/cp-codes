
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
    int a[n],b[n];

    int m1=INT_MAX,m2=INT_MAX;
    f(i,n) {
        cin>>a[i];
        m1 = min(a[i],m1);
    }
    f(i,n) {
        cin>>b[i];
        m2 = min(b[i],m2);
    }
    ll ans = 0ll;
    f(i,n) {
        bool x =(a[i]>m1);
        b[i]-=x(*a[i]-m1),ans+=x*(a[i]-m1),ans+=x*(b[i]-m2);
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
