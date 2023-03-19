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
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    int n;
    cin >> n;
    int X[n],Y[n];
    f(i,n)cin >> X[i] >> Y[i];
    sort(X,X + n);
    sort(Y,Y + n);

    int mid = n / 2;
    int midx = X[mid];
    int midy = Y[mid];

    ll ret = 1;
    if(n%2)
        ret = 1;
    else {
        int l = mid-1;
        int r = mid;
        ret = (ret * (X[r] - X[l] + 1));
        ret = (ret * (Y[r] - Y[l] + 1));
    }
    d(ret);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
