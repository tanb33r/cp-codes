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

const ll inf = 1e17;
const int MAX = 1e5;
vector<ll> factors[MAX+5];
typedef pair<int,int> pii;

void init() {
    for (ll i = 1; i <= MAX; i++)
        for (ll j = i; j <= MAX; j += i)
            factors[j].pb(i);
}

void solve() {
    ll n,m;
    cin>>n>>m;
    ll a[n];

    ll ans = 0;
    f(i,n)cin>>a[i];
    sort(a,a+n);

    vector<ll> frequency(m + 5, 0);
    ll curr_count = 0;
    ll j = 0;
    ll global_ans = inf;
    f(i,n) {
        for (auto x : factors[a[i]]) {
            if (x > m) break;
            if (!frequency[x]++) curr_count++;
        }
        while(curr_count==m) {
            ll curr_ans = a[i]-a[j];
            global_ans = min(global_ans,curr_ans);
            for (auto x : factors[a[j]]) {
                if (x > m) break;
                if (--frequency[x] == 0) curr_count--;
            }
            j++;
        }
    }
    cout << (global_ans >= inf ? -1 : global_ans) << "\n";

}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    init();
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

