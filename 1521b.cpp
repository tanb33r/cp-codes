#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    int n,m ;
    cin>>n;
    int a[n];
    int mi = 1e9+5;
    int ind = 0;
    f(i,n) {
        cin>>a[i];
        if(mi>a[i]) {
            mi = a[i],ind = i;
        }
    }

    vector<int>v;
    f(i,n) {
        if(i==ind)continue;
        v.pb(ind+1);
        v.pb(i+1);
        v.pb(mi);
        v.pb(mi+abs(i-ind));
    }
    pr(n-1);
    for(int i =0; i<v.size();) {
        int j =4;
        while(j--) {
            cout<<v[i++]<<" ";
        }
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
