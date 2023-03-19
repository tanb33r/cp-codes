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
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

void solve() {
    in(n);
    in(k);
    int a[n];
    ll sum=k;
    f(i,n)
    cin>>a[i];
    sort(a,a+n);


    ff(i,n/2,n-1) {
        sum+=a[i];
    }
    ll x = sum/(n/2 + 1);
    int p = 1;
    while(1) {
        if(x>=a[n-p])
            break;
        sum-=a[n-p];
        x = sum/((n+1)/2 - p);
        p++;
    }
    d(x);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}
