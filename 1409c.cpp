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
int n;

int ret(int x) {
    for(int i = 1 ; i<=(x) ; i++)
        if(x%i==0 and x/i<n)
            return i;
    return x;

}

void solve() {

    int x,y,i;
    cin>>n>>x>>y;
    int q = ret(y-x);
    for(i = 0 ; i<n and y-(q*i)>0; i++)
        cout<<y-(q*i)<<" ";
    int j = 1;
    while(i++<n)
        cout<<y+(q*j++)<<" ";
    cout<<"\n";
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
