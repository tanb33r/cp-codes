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
#define  fastio             ios::sync_with_stdio(0),cin.tie(0)
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

double check(ll mid,ll h,ll c) {
    double res = h*(mid+1)+c*mid;
    return res/((2*mid+1));
}
int main() {
    fastio;
    w(tt) {
        ll h,c,t;
        cin>>h>>c>>t;
        if(h==t)             d(1);
        else if(2*t<=(h+c))  d(2);
        else {
            ll r=1e12,l=0;
            while(r-l>1) {
                ll mid=(l+r)/2;
                check(mid,h,c)<t ? r=mid : l=mid;
            }
            cout<<((check(l,h,c)-t <= t-check(r,h,c)) ? (2*l+1):(2*r+1))<<"\n";
        }
    }
}
