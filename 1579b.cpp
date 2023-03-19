#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n;
    cin>>n;
    vector<int> a,b;
    f(i,n) {
        int x = II;
        a.pb(x);
        b.pb(x);
    }
    sort(all(b));
    vector<pair<pll,ll> >ans;
    f(i,n) {
        if(a[i]!=b[i]) {
            int k=0,val;
            ff(j,i+1,n) {
                if(a[j]==b[i]) {
                    k=j;
                    val=a[j];
                    a.erase(a.begin()+k);
                    break;
                }
            }
            a.insert(a.begin()+i,val);
            ans.push_back({{i+1,k+1},k-i});
        }
    }
    outa(ans.size());
    lp(i,0,ans.size()) {
        outa(ans[i].F.F<<' '<<ans[i].F.S<<' '<<ans[i].S);
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

