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
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
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
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MOD= 1e9+7;
ll addM(ll a,ll b) {
    return (a+=b)>=MOD?(a-=MOD):a;
}
ll subM(ll a,ll b) {
    return (a-=b)<0?(a+=MOD):a;
}

void solve() {
    ll a,b;
    cin>>a>>b;
    if(a<b) swap(a,b);
    int d = a-b;


    vector<int>v;
    for(int i = 1; i*i<=d; i++) {
        if(d%i == 0) {
            v.pb(i);
            if(i*i != d)
                v.pb(d/i);
        }
    }
    ll ans = (1ll <<60);
    ll val=0ll;
    sort(v.begin(), v.end());
    f(i,v.size()) {
        int x = v[i];
        if(a%x != b%x) continue;
        if(a%x==0) {
            ll lcm= (a*b)/__gcd(a,b);
            if(ans>lcm) ans = lcm,val = 0;
        } else {
            ll lcm= ((a + x-a%x) * (x - b % x + b))/__gcd((x - a % x + a), (x - b % x + b));
            if(ans>lcm) ans = lcm,val = x-b%x;
        }
    }



    pr(val);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}


