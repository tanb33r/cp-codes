#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;
const int mod = 1000000007;

using namespace std;


int main() {
    fastio;
    in(n);
    vector<ll> prefix(n + 1, 0);
    f(i,n) {
        in(x);
        prefix[i + 1] = prefix[i] + x;
    }

    int b = 0, e = 0;
    ll ans = 0;
    set<ll> s = {0};
    while(b<n) {
        while(e<n and !s.count(prefix[e+1])) {
            e++;
            s.insert(prefix[e]);
        }
        ans += e - b;
        s.erase(prefix[b]);
        ++b;
    }
    d(ans);
}
