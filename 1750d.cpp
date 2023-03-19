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
#define  newl               cout<<"\n"
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
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
const ll mod = 998244353;
vector<int> get_primes(int n) {
    int d = 2;
    vector<int> ans;
    while (d * d <= n) {
        bool flag = false;
        while (n % d == 0) {
            n /= d;
            flag = true;
        }
        if (flag) ans.push_back(d);
        d++;
    }
    if (n != 1) ans.push_back(n);
    return ans;
}



void solve() {
    ll n,m;
    cin>>n>>m;
    ll a[n];
    f(i,n)cin>>a[i];

    bool ok = 1;
    for (int i = 1; i < n; ++i)
        if (a[i-1] % a[i] != 0) {
            ok = false;
            break;
        }
    if (!ok) {
        pr(0);
        return;
    }

    vector<int> factors = get_primes(a[0]);
    map<pii,int> mp;
    ff(i,1,n) mp[ {a[i-1],a[i]}] = 0;
//    debb(n);
    for(auto i : mp) {
        int left = i.F.F / i.F.S;
        int k = m / i.F.S;
        vector<int> leftP;
        for (auto i : factors) {
            if (left % i == 0) {
                leftP.push_back(i);
            }
        }
        int sz = (int)leftP.size();
        int ans = 0;
        for (int mask = 0; mask < (1 << sz); ++mask) {
            int prod = 1;
            int cnt = 0;
            for (int j = 0; j < sz; ++j) {
                if (mask & (1 << j)) {
                    prod *= leftP[j];
                    cnt++;
                }
            }
            ans += (cnt % 2 == 0)? (k / prod) : -(k / prod);
        }
        mp[i.F] = ans;
    }

    ll ans = 1;
    for (int i = 1; i < n; ++i) {
        ans = (ans * mp[ {a[i - 1], a[i]}] )%mod;
//        debb(ans);
    }
    pr(ans);
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


