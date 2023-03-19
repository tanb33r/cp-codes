#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef pair<int,int> pii;
const int MAX= 2e5+5;
template <typename num_t>
using ordered_set = tree<num_t,null_type,less<num_t>,rb_tree_tag,tree_order_statistics_node_update>;

void solve() {
    int n;
    cin>>n;
    ll a[n];
    f(i,n)cin>>a[i];
    ordered_set<ll>s;
    ll ans = 0;
    fr(i,n,0) {
        int x = 0;
        fr(j,i,0) {
            if(a[j]<a[i]) ans+=x;
            x+=s.order_of_key(a[j]);
        }
        s.insert(a[i]);
    }

    pr(ans);
}
    int main() {
        ios::sync_with_stdio(0),cin.tie(0);
        int t=1;
        cin>>t;
        while(t--)
            solve();
    }


