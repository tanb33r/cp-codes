#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 2e5+7;
//dp[N][2];
//
//ll calc(int i, bool x, int last) {
//    if(i>=n) return 0;
//    if (dp[i][x]!=-1) return dp[i][x];
//    if(abs(last-a[i])<=K) {
//        int ans = max(calc(i+1,x, a[i]);
//                      dp[i][x] = ans;
//    } else {
//        int ans = max(calc(i+1,!x, last);
//                      dp[i][x] = ans;
//    }
//              dp[i][!x] = calc(i+1,!x,last);
//
//
//}

void solve() {
    ll n,K;
    cin>>n>>K;
    int a[n];
//    bool used[n];
    f(i,n) {
        cin>>a[i];
//        dp[i][0]=dp[i][0] = -1;
    }
    sort(a,a+n);
    int ans = 0;
    int cnt = 0;
int i = 0 ;
    while(i<n-1) {
        if(abs(a[i]-a[i+1])<=K) {
            cnt++;
            ans = max(ans,cnt);
        }
        else cnt = 0;
        i++;
    }
//    int ans = 0 ;
//
//    int i = 0 ;
//    f(i,n) {
//        int cnt = 1;
//        if(!used[a[i]]) {
//            int j = i+1;
//            int last = a[i];
//            used[i]=1;
//
//            f(j,n) {
//                if(abs(last-a[j])<=K) {
//                    cnt++;
//                    last = a[j];
//                    used[j]=1;
//                }
//                j++;
//            }
//        }
//        ans = max(ans,cnt);
//    }

    pr(n-ans-1);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
