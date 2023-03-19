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
#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
int a[1010][1010];
int dp[1010][1010];
int vis[1010][1010];
int n,m;


queue <int> q[3];

void dfs() {
    while(!q[0].empty()) {
//            ps(asdasdasd);
        int x = q[0].front();
        int y = q[1].front();
        int ans = q[2].front();
        if(vis[x][y]) {
            q[0].pop();
            q[1].pop();
            q[2].pop();
            continue;
        }
        vis[x][y]=1;

        dp[x][y] = max(dp[x][y],ans);
        deb(ans);
        deb(x);
        deb(y);
        if(x>=n and y>=m) {
            break;
        } else if(x<n and y<m) {
            if(a[x][y]) {
                q[0].push(x+1);
                q[1].push(y+1);
                q[2].push(ans+1);
            } else {
                q[0].push(x+1);
                q[1].push(y);
                q[2].push(ans);
                q[0].push(x);
                q[1].push(y+1);
                q[2].push(ans);
            }
        } else if(x<n) {

            q[0].push(x+1);
            q[1].push(y);
            q[2].push(ans);
        } else if(y<m) {

            q[0].push(x);
            q[1].push(y+1);
            q[2].push(ans);
        }
        q[0].pop();
        q[1].pop();
        q[2].pop();
    }
}
void solve() {
    int k;
    cin>>n>>m>>k;
    memset(vis,0,sizeof vis);
    memset(a,0,sizeof a);
    memset(dp,0,sizeof dp);
    f(i,k) {
        int x,y;
        cin>>x>>y;
        x--,y--;
        a[x][y] = 1;
    }
    q[0].push(0);
    q[1].push(0);
    q[2].push(0);
    dfs();
    int cnt = dp[n][m];
//    f(i,n+1) {
//        f(j,m+1)
//        cout<<a[i][j]<<" ";
//        newl;
//    }
//    f(i,n+1) {
//        f(j,m+1)
//        cout<<dp[i][j]<<" ";
//        newl;
//    }
    double ans = (m+n)*100;
    deb(cnt);
    deb(ans);
    ans-=cnt*200;
    deb(ans);
    ans+= 141.421356*cnt;
    ans = round(ans);
    pr(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
