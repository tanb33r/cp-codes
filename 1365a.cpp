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
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

void solve() {

    int n, m;
    cin>>n>>m;
    int c=0,a[n+2][m+2];
    memset(a,0,sizeof(a));
    ff(i,1,n)
    ff(j,1,m) {
        cin>>a[i][j];
    }


    ff(i,1,n)
    ff(j,1,m) {
        if(!a[i][j] and !a[i-1][j] and !a[i+1][j] and !a[i][j+1] and !a[i][j-1])
            a[i][j]++,c++;
    }
    deb(c);
    (c&1)?ps(Ashish):ps(Vivek);


}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
