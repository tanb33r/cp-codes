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


const int N = 105;
const int W = 1e5 + 5;
int w[N], v[N];
int dp[N][W];
int n, wt;

int dynamic(int i, int we) {
    if (we > wt) return INT_MIN;
    if (i >= n) return 0;
    if (dp[i][we] != -1)
        return dp[i][we];
    int ans;
    ans = max(dynamic(i + 1, we + w[i]) + v[i], dynamic(i + 1, we));
    dp[i][we] = ans;
    return ans;
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> wt;
    memset(dp,-1,sizeof(dp));
    f(i,n)
    cin >> w[i] >> v[i];
    pr(dynamic(0, 0));
}

