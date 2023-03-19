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
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
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
const int MAX= 2e5+5;

ll n,a[MAX],tar,l,r;
bool check(ll sz) {
    ll sum=0,x=0;

    f(i,sz)
    sum+=a[i],x^=a[i];

    if(sum-x == tar) {
        l=1,r=sz;
        return 1;
    }
    ff(i,sz,n) {
        sum+= a[i]-a[i-sz];
        x^=a[i-sz]^a[i];
        if(sum-x == tar) {
            r=i+1;
            l=r-(sz-1);
            return 1;
        }
    }
    return 0;
}

void solve() {
    int q;
    cin>>n>>q;
    ll x = 0;
    f(i,n)cin>>a[i];
    II,II;
    ll sum = 0;
    sum = accumulate(a,a+n,0ll);
    f(i,n) x^=a[i];
    tar=sum-x;

    if(!sum) return void(cout<<"1 1\n");

    ll left=1, right=n;
    while(left<right) {
        ll m=(left+right)>>1;
        check(m)?right=m:left=m+1;
    }
    check(left);
    pr(l<<' '<<r);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}



