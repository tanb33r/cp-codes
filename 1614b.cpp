#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout1(v)            for(int I=0;I<(v).size();I++)cout<<v[I].F<<" ";
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  int                long long
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
bool cmp(pii a, pii b) {
    return a.S<b.S;
}
void solve() {
    int n;
    cin>>n;
    int a[n];
    vector<pii> v,v2;
    f(i,n) {

        int x = II;
        v.pb({x,i+1});
        v2.pb({x,i+1});
    }
    sort(all(v));
    reverse(all(v));
    vector<int> ans,ans2;

    map<int, int> m;
    int k = 0;
    f(i,n) {
        if(i&1) {
            ans.pb(-k);
        } else {
            k++;
            ans.pb(k);
        }
    }
    int fin[n+2];
    f(i,n) {
        fin[v[i].S] = ans[i];
    }
       ll cost=0ll;
    f(i,n) {
//        deb(v[i].F<<" "<<fin[i+1]<<" "<<2*abs(fin[i+1])*v2[i].F);
        cost += 2*abs(fin[i+1])*v2[i].F;
    }
    pr(cost);
    cout<<0<<' ';
    f(i,n) {
        cout<<fin[i+1]<<" ";
    }
    newl;
//    vout1(v);
//    newl;
//    vout(ans);

}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


