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
int main() {
    int n,q,l,r;
    string s;
    cin>>n>>q>>s;
    f(i,q) {
        string t;
        cin>>l>>r;
        for (int i = l; i<=r; i++)
            t+=s[i];

        int m = t.size();
        int dp[m+1];
        memset(dp,0,sizeof dp);


        dp[0]=1;

        for(int C = 0; C < n; C++) {
            for(int X = m-1 ; X >= 0 ; X-- ) {
                if(t[X] == s[C]) {
                    dp[X + 1] += dp[X];
                }
            }
        }
//        f(i,m)
//        cout<<dp[i]<<" ";
//        newl;
        cout<<dp[m]<<"\n";
    }
}
