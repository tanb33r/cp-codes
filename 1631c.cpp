#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MOD= 1e9+7;
ll addM(ll a,ll b) {
    return (a+=b)>=MOD?(a-=MOD):a;
}
ll subM(ll a,ll b) {
    return (a-=b)<0?(a+=MOD):a;
}

int c(int x,int n) {
    return ( x ^ ( n - 1 ) );
}

void solve() {
    int n, k;
    cin>>n>>k;
    int  a[n/2], b[n/2];

    if(k==0)
        f(i,n/2)
        a[i] = i,b[i] = c(i,n);

    if(k>0 and k<n-1) {
        int K = min(k,c(k,n));
        f(i,n/2)
        if(i!=0 and i!=K)
            a[i] = i,b[i] = c(i,n);

        a[0] = 0;
        b[0] = c(k,n);
        a[K] = k;
        b[K] = n-1;
    }

    if( k == n - 1 ) {
        if( n == 4 )
            return void(pr(-1));

        a[0] = n - 2;
        b[0] = n - 1;

        a[1] = 1;
        b[1] = n - 3;

        a[2] = 0;
        b[2] = 2;

        ff(i,3,n/2)
        a[i] = i,b[i] = c(i,n);
    }
        f(i,n/2)
        pr(a[i]<<' '<<b[i]);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


