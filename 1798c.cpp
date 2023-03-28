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
#define MAXN   100001

// stores smallest prime factor for every number
int spf[MAXN];

// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)

        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;

    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;

    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)

                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}


ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}
ll lcm(ll a, ll b) {
    return (a*b)/gcd(a,b);
}



vector<ll> div(ll x) {
    vector<ll> ans;
    vector<ll> ans2;
    for(int i = 1; i*i<=x; i++)
        if(x%i==0) {
            ans.pb(i);
            if(i*i!=x)
                ans.pb(x/i);
        }
//    reverse(all(ans2));
    sort(all(ans));
//    ans.insert( ans.end(), ans2.begin(), ans2.end() );

    return ans;
}

void solve() {
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll ans = 0;
    ll gc = 1;
    f(i,n)cin>>a[i]>>b[i];
    vector<ll> cur;
    vector<ll> mat;
    f(i,n) {

//        if(i)  gc = gcd(a[i-1]*b[i-1],a[i]*b[i]);
//        else gc = a[i]*b[i];
        vector<ll> divi2 = div(a[i]);
        vector<ll> divi;
        f(k,divi2.size()) {
            divi.pb(divi2[k]*b[i]);
        }

//        ps( );
//        ps(divi);
//        vout(divi);

        if(cur.size()==0)
            cur = divi;
        else {
            int x=0, y=0;
            while(x<cur.size() and y<divi.size()) {
                if(cur[x]==divi[y]) {
                    mat.pb(cur[x]);
                    x++,y++;
                } else if(cur[x]>divi[y])y++;
                else     x++;
            }

            if(mat.size()>0)
                cur = mat;
            else {
                cur = divi;
                ans++;
            }
//            ps(cur);
//            vout(cur);
//            ps(mat);
//            vout(mat);


            mat = {};
        }
    }
    ans += (cur.size()>0);

    pr(ans);
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
