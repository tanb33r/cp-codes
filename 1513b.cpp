#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int MOD=1e9+7;

void solve() {
    int n,m=1e9+4,k,ans=0;
    cin>>n;
    int a[n];
    f(i,n) {
        cin>>a[i];
        m =min(m,a[i]);
    }
    int cnt=0;
    f(i,n) {
        cnt+= m==a[i];
        if((m&a[i])!=m) {
            pr(0);
            return;
        }
    }

    int fact=1;
    for(int i=1; i<=n-2; i++)fact=(1LL*fact*i)%MOD;
    ans=(1LL * cnt * (cnt-1))%MOD;
    ans = (1LL * ans * fact) % MOD;
    pr(ans);

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
