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
    f(i,n)
    cin>>a[i];
    int c = 0 ;
    int ans = 0,ans2 = 0;
    int x = 0 ;
    f(i,n-1) {
        while(i<n-1 and a[i] > a[i+1]) i++;
        if(i<n-1 and a[i] == a[i+1]) {
            x=1,ans2 = i;
            while(i<n-1 and a[i] == a[i+1]) i++;
        }
        if(i<n-1 and a[i] < a[i+1]) {
            ans = (x)?ans2:i;
            while(i<n-1 and a[i] <= a[i+1]) i++;
        }
        x=0;
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
