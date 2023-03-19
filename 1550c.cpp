#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)       )          for(int i=int(n);i>=j;--i)
#define  ps(x)         cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

bool arebad2(int a, int b,int c, int d) {
    bool B = 0;
    B |= (a<= b and b<=c) or (a >= b and b>=c);
    B |= (a<= b and b<=d) or (a >= b and b>=d);
    B |= (a<= c and c<=d) or (a >= c and c>=d);
    B |= (b<= c and c<=d) or (b >= c and c>=d);
    return !B;
}

bool arebad(int p, int q,int r) {
    return !((p<= q and q<=r) or (p >= q and q>=r));
}

void solve() {
    int n,ans=0;
    cin>>n;
    int a[n];
    f(i,n) cin>>a[i];
    ans = 2*n-1;
    int cnt =0;
    f(i,n-2) {
        cnt+=arebad(a[i],a[i+1],a[i+2]);
    }
    f(i,n-3) {
        cnt+=arebad2(a[i],a[i+1],a[i+2],a[i+3]);
    }


    pr(ans+cnt);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
