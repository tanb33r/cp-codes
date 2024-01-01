#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;
const int S = 1e5+5;
bool prime[S];
vector<int> v;

void sieve2(int n)
{
    // Create a boolean array "prime[0..n]" and
    // initialize all entries it as true. A value
    // in prime[i] will finally be false if i is
    // not a prime, else true.
    vector<bool> prime(n+1, true);

    // Loop to update prime[]
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it
        // is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Store primes in the vector allPrimes
    for (int p=2; p<=n; p++)
        if (prime[p])
            v.push_back(p);
}


void sieve() {
    v.push_back(2);
    for(int i = 3 ; i < S; i+=2)
        if(!prime[i]) {
            v.push_back(i);
            for(int j = i*i ; j < S; j+=2*i)
                prime[j] = 1 ;
        }
}

void solve() {
    ll n;
    cin>>n;
    ll ans = 1;

    f(i,v.size()) {
        ll x = v[i];
        ll res = 1;
        while(x<=n) {
            res+=(n/x);
//            x *= v[i];

        x = (x*v[i])%mod;
        }
        ans = (ans*res)%mod;
    }



    pr(ans);
}

int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    sieve2(10000);
    while(t--)
        solve();
}
