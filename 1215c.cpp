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
    string s,s2;
    int n ;
    cin>>n>>s>>s2;

    vector<int> a,v,v2;
    f(i,n) {
        if(s[i] == 'a' and s2[i] == 'b')
            v.pb(i);
        if(s2[i] == 'a' and s[i] == 'b')
            v2.pb(i);
    }
    if(v2.size()%2 != v.size()%2 ) {
        d(-1);
        return;
    }
    int ans = 0;
    while(v.size()>1) {
             a.pb(v.back());
             a.pb(v[v.size()-2]);
             v.pop_back();
             v.pop_back();
             ans++;
    }
    while(v2.size()>1) {
             a.pb(v2.back());
             a.pb(v2[v2.size()-2]);
             v2.pop_back();
             v2.pop_back();
             ans++;
    }
    if(v.size()) {
        a.pb(v.back());
        a.pb(v.back());
        a.pb(v.back());
        a.pb(v2.back());
        ans+=2;
    }
    cout<<ans<<"\n";
    f(i,a.size())
    cout<<a[i]+1<<" "<<a[++i]+1<<"\n";



}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
