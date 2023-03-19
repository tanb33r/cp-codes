#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              {cout<<(#x)<<endl;return;}
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
    int n;
    cin>>n;
    if(n==1)
        ps(FastestFinger);
    if(n==2 or n%2)
        ps(Ashishgup);

    int x=n ,c = 0;
    while(x%2==0) x/=2,c++;
    if(x==1)
        ps(FastestFinger);
    if(c==1)
        ps(FastestFinger);

        ps(Ashishgup);
//
//    int c = 0;
//    for(int i=2; i*i<=n; i++) {
//        if(n%i==0) {
//            if(i%2) c++;
//            if((n/i)%2) c++;
//        }
//    }
//    if(c>1) ps(Ashishgup);
//    else    ps(FastestFinger);

}


int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
