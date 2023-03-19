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
int sum[103];
int a[103];
int dp[105][105];
int pref(int i, int j ) {
    return sum[j]-sum[i-1];
}
int best(int i, int j) {

    if(i > j) return 0;
    if(i == j) return a[i];


    int &ans = dp[i][j];
    if(ans != -1) return ans;

    ans = -mod;

    for(int k = i ; k<=j; k++)
        ans = max({ans,pref(i,k)- best(k+1,j), pref(k,j)- best(i,k-1)});
    return ans;
}

void solve(int n) {

    memset(a,0,sizeof a);
    memset(sum,0,sizeof sum);
    ff(i,1,n+1) {
        cin>>a[i];
        sum[i] = sum[i-1] + a[i] ;
    }
    memset(dp,-1,sizeof dp);

    int ans = best(1,n);


    pr(ans);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    while(cin>>n)
        if(n) solve(n);
        else break;
}

