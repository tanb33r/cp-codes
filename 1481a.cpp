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
    string s;
    int x,y;
    cin>>x>>y>>s;
    int x1 =0,y1=0,f1=0,f2=0;
    string ans = "NO";
    f(i,s.size()) {
        if(s[i] == 'R') {
            if(x1<x)x1++;
        } else if(s[i] == 'L') {
            if(x1>x)x1--;
        } else if(s[i] == 'U') {
            if(y1<y)y1++;
        } else if(s[i] == 'D') {
            if(y1>y)y1--;
        }
        if(x1==x) f1=1;
        if(y1==y) f2=1;
//        deb(x1);
//        deb(y1);
    }
    if(f1 and f2) ans = "YES";
    d(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

