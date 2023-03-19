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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
ll p = 1e9+7;


ll modFact(ll n) {
    if (n >= p) return 0;
    ll result = 1;
    for (ll i = 1; i <= n; i++)
        result = (result * i) % p;
    return result;
}


void solve() {
    int n,m ;
    cin>>n;
    int a[n+1];
    int b[n+1];
    int indx[n+1];
    int c[n+1] {0};
    ff(i,1,n+1)  {
        cin>>a[i];
        indx[a[i]] = i;
    }
    ff(i,1,n+1)  cin>>b[i];
    int cyc=0;
    ff(i,1,n+1) {
        if(c[a[i]]) continue;

        vector<int>v;
        int x = a[i];
        v.pb(x);
        int k = i;
        while(c[x] == 0) {
            c[x] = 1;
            x = b[k];
            k = indx[x];
        }
        cyc++;

    }
    ll ans = modFact(cyc)+2ll;
    ans = 1 ;
    f(i,cyc)
    ans = ans*2%p;
//    if(cyc == 1) {
//        ps(2);
//    } else
        cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
