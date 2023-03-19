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
#define  vprint(v)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;


void solve() {
    ll a,b,n;
    cin>>a>>b>>n;
    vector< vector<ll> >v(n) ;
    f(i,n) {
        ll x;
        cin>>x;
        v[i].pb(x);
    }
    f(i,n) {
        ll x;
        cin>>x;
        v[i].pb(x);
    }
    sort(all(v));
    ll i = 0;
    ll fl=0;
    while(i<n) {
        ll x =1;
        if(b>0) {
            x = ((v[i][1]+a-1)/a);
            b-=x*v[i][0];
            fl = (i==n-1 and b<=0 and b+v[i][0]>0);
        } else break;
        i++;
    }
    cout<<(b>0 or fl ? "YES\n":"NO\n");
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

