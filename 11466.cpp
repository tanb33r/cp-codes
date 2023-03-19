/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
//#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;


const int mod = 1000000007;
using namespace std;


const int S = 1e7+5;
bool prime[S];
vector<ll> p;
void sieve() {
    prime[0] = prime[1] = 1;

    p.pb(2);
    for(int i = 3 ; i < S; i+=2)
        if(!prime[i]) {
            p.pb(i);
            for(int j = i+i ; j < S; j+=2*i)
                prime[j] = 1 ;
        }
}


int main() {
    fastio;
    sieve();
    ll n;
    while(cin>>n,n) {
        ll ans = -1;
        n = abs(n);
        ll n2 = sqrt(n)+1;
        int p2 = p.size();
        int c = 0;
        for(int i = 0  ; i<p2 and p[i]<=n; i++) {
            if(n%p[i] == 0) {
                ans = p[i];
                c++;
                while(n%p[i] == 0)
                    n/=p[i];
            }
        }
        if(n!=1)
            ans = n,c++;
        if(c<2)
            ans = -1;
        d(ans);
    }
}





