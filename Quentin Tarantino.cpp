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
typedef  long long          ll;

void solve() {
    in(n);
    int a[n];
    bool b=1;
    int m=0;
    int c[500+1] = {0};
    for(int i = 1; i<=n; i++) {
        cin>>a[i];
        c[a[i]] = 1;
    }
    bool k = 0;//linear
    for(int i = 1; i<=n; i++) {
        if(c[i] == 0) b=0;
        if(a[i]!=i) k=1;
    }
    cout<<((b and k)?"yes\n":"no\n");
}


int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

