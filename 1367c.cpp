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
    int n, k,ans = 0;
    cin>>n>>k;
    vector<int> v;
    char c;
    f(i,n) {
        cin>>c;
        if(c == '1') v.pb(i+1);
    }

    if(!v.size()) {
        d(max(1,(n+k)/(k+1)));
        return;
    }
    ans = (v[0] - 1) / (k+1) + (n - v.back()) / (k+1);

    while(v.size()>1) {
        if(v[v.size()-1] - v[v.size()-2] > (2*k+1)) {
            int x = v[v.size()-1];
            v.pop_back();
            v.pb(x-k-1);
            ans++;
        } else v.pop_back();
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

