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
    int a[n];
    int o=0,e=0;;
    vector<int> O,E;
    f(i,n) {
        cin>>a[i];
        if(a[i]&1) {
            o++;
            O.pb(i);
        } else {
            e++;
            E.pb(i);
        }
        a[i]=a[i]&1;
    }

    if(abs(e-o)>1) {
        pr(-1);
        return;
    }
    ll ans =0;
//    if(o>e) {
    if(o>e) {
        int k = 0;
        f(i,O.size()) {
            ans+=abs(k-O[i]);
            k+=2;
        }
    }

    if(o<e) {
        int k = 0;
        f(i,E.size()) {
            ans+=abs(k-E[i]);
            k+=2;
        }
    }

    if(o==e) {
        ll m=0,n=0;
        int k = 0;

        f(i,O.size()) {
            m+=abs(k-O[i]);
            k+=2;
        }
        k = 0;
        f(i,E.size()) {
            n+=abs(k-E[i]);
            k+=2;
        }
        ans = min(m,n);
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

