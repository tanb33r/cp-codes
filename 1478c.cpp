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
#define  int                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

const int maxn=200007;
int t;
int n,D[maxn],d1[maxn],diff[maxn];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>t;
    while (t--) {
        cin>>n;
        for (int i=0; i<2*n; ++i) cin>>D[i];
        sort(D,D+2*n);
//        for (int i=0; i<2*n; ++i) cout<<D[i]<<" ";
//        cout<<endl;
        for (int i=0; i<n; ++i) {
            if (D[i*2]!=D[i*2+1]) {
                cout<<"NO\n";
                goto cont;
            }
            d1[i]=D[i*2];
        }
       arrp(d1,n);
        for (int i=1; i<n; ++i) {
            if (d1[i-1]==d1[i]||(d1[i-1]-d1[i])%(2*i)) {
                cout<<"NO\n";
                goto cont;
            }
            diff[i]=(d1[i-1]-d1[i])/(2*i);
        }


       arrp(diff,n);
//        cout<<endl;
        for (int i=1; i<n; ++i) {
            d1[n-1]-=2*i*diff[i];
        }
        deb(d1[n-1]);
        if (d1[n-1]<=0||d1[n-1]%(2*n)) cout<<"NO\n";
        else cout<<"YES\n";

cont:
        ;
    }
    return 0;
}
