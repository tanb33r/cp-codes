#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MAX= 2e5+5;

vector<int> facts(int n) {
    vector<int> arr;
    while(n%2==0) {
        n/=2;
        arr.pb(2);
    }

    int i=3;
    while(i*i<=n) {
        if(n%i==0) {
            arr.pb(i);
            n=n/i;
        }
        i+=2;
    }
    if(n>2) {
        arr.pb(n);
    }
    return arr;
}



void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> fac = facts(x);
    vector<int> fac2;
    sort(all(fac));
    int k = fac.back();
//    vout(fac);
    ll a[n];
    ll ans = 0;
    map<int,int> m,mp;
    f(i,n) {
        int x = II;
        a[i] = x;
        m[x]++;
    }
    f(i,fac.size()) {
        mp[fac[i]]++;
    }
    for(auto x:mp) {
//            deb(x.F<<' '<<x.S);
        fac2.pb(x.F*x.S);
    }
//    vout(fac2);
    sort(all(fac2));
    k = fac2.back();
    deb(k);
    f(i,n)
    if(k>a[i]) {
            deb(k<<' '<<a[i]);
        ps(No);
        return;
    }

//    f(i,fac2.size()) {
//        if(k>fac2[i]) {
//            ps(No);
//            return;
//        }
//    }


//    f(i,n)
//    for(auto x:m) {
//        if(x.F*x.s>a[i]) {
//            ps(No);
//            return;
//        }
//    }
    ps(Yes);

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}



