#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  pr(x)               cout<<x<<"\n"
#define  ps(x)               cerr<<(#x)<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<x<<endl
#define  ll long long
//#define  cerr               if(0)cerr


const ll maxn = 2e5 + 100;

ll q, n, a[maxn], b[maxn];

using namespace std;
typedef pair<int,int> pii;


bool bin(ll x) {
    ll c = 0;
    for(ll i = 0; i < n; i++) c+=(x-1-a[i]<= c and c <= b[i]);
    return c>=x;
}
void solve() {

    cin>>n;
    f(i,n)
    cin>>a[i]>>b[i];
    ll l = -1, r = n+1, mid;
    while(r-l>1) {
        mid = (l+r)>>1;
        if(bin(mid)) l = mid;
        else r = mid;
//        deb(l<<" "<<r);
    }
    pr(l);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

