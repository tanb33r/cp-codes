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
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,m ;
    cin>>n>>m;
    char a[n][m];
    char b[n][m];
    char c[n][m];
    f(i,n) f(j,m) cin>>a[i][j];
    bool co = 0;
    f(i,n) {
        bool bo = co;
        f(j,m) {
            b[i][j] = bo?'W':'R';
            bo=!bo;
            c[i][j] = bo?'W':'R';
        }
        co =! co;
    }
    bool flag = 1;
    f(i,n) f(j,m) {
        if(a[i][j] != '.') {
            if(a[i][j] !=b[i][j]) {
                flag = 0;
                break;
            }
        }
    }
    if(flag) {
        ps(YES);
        f(i,n) {
            f(j,m) cout<<b[i][j];
            newl;
        }
        return;
    }

    flag = 1;
    f(i,n) f(j,m) {
        if(a[i][j] != '.') {
            if(a[i][j] != c[i][j]) {
                flag = 0;
                break;
            }
        }
    }
    if(flag) {
        ps(YES);
        f(i,n) {
            f(j,m) cout<<c[i][j];
            newl;
        }
        return;
    }


    ps(NO);

}





int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
