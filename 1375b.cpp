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
    int a[n][m],b[n][m];
    f(i,n)
    f(j,m) {
        cin>>a[i][j];
        b[i][j] = 4;
        if(!i or !j or i == n-1 or j == m-1)
            b[i][j] = 3;
    }

    b[0][0] = b[0][m-1] = b[n-1][0] = b[n-1][m-1] = 2;

    f(i,n) f(j,m)
    if(b[i][j]<a[i][j]) {
        ps(NO);
        return;
    }
    ps(YES);
    f(i,n) {
        f(j,m)
        cout<<b[i][j]<<" ";
        newl;
    }

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
