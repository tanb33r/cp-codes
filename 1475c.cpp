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
    int A, B, k;
    cin >> A >> B >> k;
    vector<int> a(A), b(B);
    vector<pair<int, int>> edges(k);
    for (auto &[x, y] : edges) {
        cin >> x;
    }
    for (auto &[x, y] : edges) {
        cin >> y;
    }
    for (auto &[x, y] : edges) {
        a[--x]++;
        b[--y]++;
    }
    ll ans = 0;
    for (auto &[x, y] : edges) {
        ans += k - a[x] - b[y] + 1;
    }
    pr(ans/2);

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
