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
#define  AO(a,n)            for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
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
ll getClosest(ll, ll, ll);

ll findClosest(ll arr[], ll n, ll target) {
    if (target <= arr[0])
        return arr[0];
    if (target >= arr[n - 1])
        return arr[n - 1];
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;

        if (arr[mid] == target)
            return arr[mid];

        if (target < arr[mid]) {

            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr[mid - 1],
                                  arr[mid], target);
            j = mid;
        } else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr[mid],
                                  arr[mid + 1], target);

            i = mid + 1;
        }
    }

    return arr[mid];
}

ll getClosest(ll val1, ll val2,
               ll target) {
    if (target - val1 >= val2 - target)
        return val2;
    else
        return val1;
}



bool touch(ll a,ll b,ll c,ll m) {
    b = b-m;
    ll ans = b*b - (4*a*c);
    return ans<0ll;
}

void solve() {
    ll n,m;
    cin>>n>>m;
    ll k[n];
    ll ans = 0;
    vector<ll> pos,neg;
    f(i,n) {
        cin>>k[i];
        if(k[i]>=0) pos.pb(k[i]);
        else neg.pb(k[i]);
    }
    sort(k,k+n);


    while(m--) {
        ll a,b,c;
        cin>>a>>b>>c;
        ll clo = findClosest(k, n, b);

        if(touch(a,b,c,clo)) {
        cout<<"YES\n"<<clo<<"\n";
        } else {
            cout<<"NO\n";
        }

        cout<<"\n";
    }
}



int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
