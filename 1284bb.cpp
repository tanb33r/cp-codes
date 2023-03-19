#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  ps(x)              cout<<(#x)<<endl
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0; I<(vec).size(); I++)cout << vec[I] << " ";cout<<endl
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;
using namespace std;
using pi = pair<int, int>;
vector<pi> pr;

int main() {
    fastio;
    in(n);
    ll ans = 1ll * n * n;
    f(i,n) {
        in(m);
        vi v(m);
        f(j,m) cin>>v[j];
        reverse(all(v));

        if(is_sorted(all(v))) {
            pr.emplace_back(v.front(),v.back());
        }
    }
    sort(all(pr));
    f(j,pr.size())
    ans -= pr.end() - lower_bound(all(pr), pi(pr[j].second, -1));
    d(ans);
}
