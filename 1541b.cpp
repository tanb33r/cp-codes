#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<ll,ll> pii;

void solve() {
    ll n,m ;
    cin>>n;
    ll ma= 2*n-1;
    ll cnt=0ll;
    vector<pii> a(n);
    f(i,n) {
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(all(a));
    f(i,n-1) {
        if(a[i].first*a[i+1].first>ma) {
            continue;
        }
        ff(j,i+1,n) {
            if(a[i].first*a[j].first>ma)
                break;
            if(a[i].first*a[j].first == a[i].second+a[j].second) {
                cnt++;
            }
        }
    }
    pr(cnt);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
