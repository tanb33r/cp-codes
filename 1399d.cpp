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
    ll n,ss=0;
    cin>>n;
    string s;
    cin>>s;

    vector<ll> ans;
    for(ll i=0,o=0,z=0; i<n; i++) {
        if(s[i]=='1') {
            o++;
            if(z) {
                ans.pb(z);
                z--;
            } else ans.pb(o);
        } else {
            z++;
            if(o) o--;
            ans.pb(z);
        }
        ss=max(ss,max(o,z));
    }

    cout<<ss<<endl;
    for(ll i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
