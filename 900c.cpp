#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,ans=0;
    cin>>n;
    int a[n],b[n] {0},c[n] {0};
    f(i,n) cin>>a[i];
    int mi=-1, ma=-1;
    int maxdx=0;
    int mm =0 ;
    f(i,n) if(mm<a[i])mm = a[i],  c[i]++;
    f(i,n) {
        if(i and a[i]<ma and a[i]>mi ) b[maxdx]++;
        if(ma<a[i]) {
            mi = ma, ma = a[i], maxdx = i;
        } else if(mi<a[i])
            mi = a[i];
    }
    f(i,n)  b[i]-=c[i];

    int x = *max_element(b,b+n);
    ans = 1e9;
    f(i,n)  if(x==b[i]) ans = min(ans,a[i]);

    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}
