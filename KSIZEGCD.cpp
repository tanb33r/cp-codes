#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            f(I,(v).size())cout<<v[I]<<" ";cout<<"\n"
#define  AI(a,n)            f(I,n)a[I]=II;
#define  AO(a,n)            f(I,n)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  vpr(x)             return void(pr(x))
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX = 2e5+5;
ll _gcd (ll a, ll b) {
    return b ? _gcd (b, a % b) : a;
}
ll _lcm(ll a, ll b) {
    return (a*b)/_gcd(a,b);
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);

    f(i, n) cin >> a[i];


    set<int> s[n];
    vector<ll> vec[n + 1];

    int k = 0;
    fr(i, n, 0) {
        s[0].insert(a[i]);
        vec[k].pb(a[i]);
        if (i == n - 1) {
            k++;
            continue;
        }

        int c = 1;
        for (auto x : vec[k - 1]) {
            ll gc = __gcd(a[i], x);
            vec[k].pb(gc);
            s[c].insert(gc);
            c++;
            if(gc==1) break;
        }
        k++;
    }

    f(i, n) {
        if(s[i].size()) {
            auto it = s[i].end();
            --it;
            cout << *it << " ";
        } else
            cout << 1 << " ";
    }
    cout << '\n';
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
