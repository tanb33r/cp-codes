#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename num_t>
using ordered_set = tree<num_t,null_type,less<num_t>,rb_tree_tag,tree_order_statistics_node_update>;

const int DEBUGGER = 0;

#define mset(a,v)                   memset(a,v,sizeof(a))
#define lp(i,a,n)                   for(int i=a;i<n;i++)
#define lpr(i,a,n)                  for(int i=n-1;i>=a;i--)
#define stlp(it,stl)                for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();it++)
#define stlpr(it,stl)               for(__typeof(stl.rbegin()) it=stl.rbegin();it!=stl.rend();it++)
#define r(a)                        a.begin(),a.end()
#define II                          ({ ll TEMP; cin>>TEMP; TEMP; })
#define SI                          ({ string TEMP; cin>>TEMP; TEMP; })
#define AI(a)                       ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n)a[I]=II; })
#define AO(a)                       ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n){cout<<(I?" ":"")<<a[I];} if(DEBUGGER)cout<<endl;else cout<<'\n'; })
#define VI(v)                       ({ lp(I,0,v.size())v[I]=II; })
#define VO(v)                       ({ lp(I,0,v.size()){cout<<(I?" ":"")<<v[I];} if(DEBUGGER)cout<<endl;else cout<<'\n'; })
#define outa(a)                     ({ if(DEBUGGER)dbg(a); else cout<<a<<'\n'; })
#define dbg(a)                      ({ if(DEBUGGER)cout<<#a<<" = "<<a<<endl; })
#define cbit(n,p)                   ((n)&(1LL<<(p)))
#define sbit(n,p)                   ((n)|(1LL<<(p)))
#define tbit(n,p)                   ((n)^(1LL<<(p)))
#define F                           first
#define S                           second

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;

const ll MAX = 2e5+5;
const ll MOD = 1e9+7;
const ll INF = 9e18;
//const double PI = acos(-1);

const int MAXN = 1e7 + 7;
int spf[MAXN];
vector<int> primes;

void sieve(){
    for(int i=2; i < MAXN; i++) {
        if(spf[i] == 0) {
            spf[i] = i;
            primes.push_back(i);
        }
        for(int j=0; j<primes.size() && primes[j]<=spf[i] && i*primes[j] < MAXN; j++) {
            spf[i * primes[j]] = primes[j];
        }
    }
}

void factorise(int z, vector<pair<int, int>> &ps) {
    while (z > 1) {
        int p = spf[z], c = 0;
        while (spf[z] == p)
            z /= p, c++;
        ps.push_back({p, c});
    }
}


void solve(){
    ll n=II,a[n];
    AI(a);
    map<int, int> mp;
    lp(i,0,n){
        vector<pair<int, int>> ps;
        factorise(a[i], ps);
        for(auto &[p, c]: ps){
            mp[p] += c;
        }
    }
    ll ans=0, ex=0;
    for(auto &[p, c]: mp){
        ans+= (c / 2);
        ex += (c & 1);
    }
    ans += ex/3;
    outa(ans);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    sieve();

    int tc=1;
    tc=II;
    while(tc--)
        solve();

    return 0;
}
