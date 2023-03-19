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
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  F                  first
#define  S                  second
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<ll,ll> pii;
bool cmp(pii a, pii b) {
    return a.S<b.S;
}

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<pii> sol(n);
    vector<ll> a(n),b(n+2,0ll);
    f(i,n) {
        cin>>a[i];
        sol[i].F=a[i];
        sol[i].S=i;
    }
    sort(all(a));
    sort(all(sol));

    b[0] += k/n;
    k%=n;
    if(k>0)  b[0]++,b[k]--;
    ll l=0;
    f(i,n) {
        l+=b[i];
        sol[i].F=l;
    }
    sort(all(sol),cmp);
    f(i,n) {
        cout<<sol[i].F<<"\n";
    }
    newl;
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
