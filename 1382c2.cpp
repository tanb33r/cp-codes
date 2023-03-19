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
    string s, s1;
    int n;
    cin>>n>>s>>s1;
    vector<int> v,v2;
    bool c = s[0]-'0';
    f(i,n) {
        if(s[i]-'0' != c)
            c=!c,v.pb(i);
        if(i+1 == n and c))
            v.pb(n);
        }
    c = s1[0]-'0';
    f(i,n) {
        if(s1[i]-'0' != c)
            c=!c,v2.pb(i);
        if(i+1 == n and c)
            v2.pb(n);

    }
    reverse(all(v2));
    cout<<v.size() + v2.size()<<" ";
    f(i,v.size())
    cout<<v[i]<<" ";
    f(i,v2.size())
    cout<<v2[i]<<" ";
    newl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
