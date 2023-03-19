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
int v[1000005],a[1000005];

void solve() {
    in(n);
    int c = 0;
    f(i,n) {
        cin>>a[i];
        if (c <= 1)   v[++c] = a[i];
        else {
            if (a[i] > v[c] == v[c] > v[c-1]) c--;
            v[++c] = a[i];
        }
    }
    d(c);
    ff(i,1,c)
    cout<<v[i]<<" ";
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
