#include <bits/stdc++.h>
#define  pb(x)              push_back(x)
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl

#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    ll n;
    cin>>n;
    vector<ll> x,y;
    f(i,2*n) {
        ll xx,yy;
        cin>>xx>>yy;
        xx=abs(xx);
        yy=abs(yy);
        if(xx==0) y.pb(yy);
        else x.pb(xx);
    }
    sort(all(x));
    sort(all(y));
    double ans=0;
    f(i,n) {
        ans+=sqrt(x[i]*x[i]+y[i]*y[i]);
    }
    cout<<fixed<<setprecision(15);
    pr(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
