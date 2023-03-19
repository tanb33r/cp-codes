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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
int grid[205][205];
int dp[205][205];
int n;
ll climb(int x, int y) {
    if(grid[x][y]) {
        if(dp[x][y]!=-1) return dp[x][y];
        ll mx = -1;
        if(x<n) {
            mx = max(mx,climb(x+1,y)+grid[x][y]);
            mx = max(mx,climb(x+1,y+1)+grid[x][y]);
        } else {
            mx = max(mx,climb(x+1,y)+grid[x][y]);
            mx = max(mx,climb(x+1,y-1)+grid[x][y]);
        }
        return dp[x][y]=mx;
    }
    return 0ll;
}

int T=1;

void solve() {
    cin>>n;
    memset(dp,-1,sizeof dp);
    memset(grid,0,sizeof grid);
    ff(i,1,2*n) {
        if(i>n)
            for(int j=1; j<=2*n-i; j++)
                cin>>grid[i][j];
        else
            for(int j=1; j<=i; j++)
                cin>>grid[i][j];
    }
    cout<<"Case "<<T++<<": "<<climb(1,1)<<endl;

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
