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
    int n,c=0;
    cin>>n>>s>>s1;
    vector<int> v ;
//    deb(s);
//    reverse(s.begin(),s.begin()+1);
//    deb(s);
    for(int j =  n - 1 ; ~j; j--)
        if(j == 0 and s[j] != s1[j])
            {c++,v.pb(1);}
        else if(s[j] != s1[j]) {
            c+=3;
            v.pb(j+1);
            v.pb(1);
            v.pb(j+1);
        }

    cout<<c<<" ";
    f(i,v.size())
    cout<<v[i]<<" ";
    newl;
}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
