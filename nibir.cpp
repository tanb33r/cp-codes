#include<bits/stdc++.h>
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
using namespace std;

int r,c,K,cnt=0,s;

int grid[10][10];
int dp[10][10];
int n,m;

int call(int r,int c,int k, int past) {
    if(r==n-1&&c==m-1) {
        return grid[n-1][m-1];
    }
    if(r>=n||r<0||c>=m||c<0) return 0;
//    if(dp[r][c]!=-1) return dp[r][c];
//
//    deb(r);
//    deb(c);
//    deb(k);
//    deb(past);
//    newl;

    int ans1=0;
    int ans2=0;
    int ans3=0;
    if(k>0 and r>0) {
//        ps(calling1);
        ans1=call(r-1,c,k-1,1);
    }
//    ps(calling2);
    ans2=call(r+1,c,k,2);
//    ps(calling3);

    ans3=call(r,c+1,k,0);


    if(past == 1) ans2-=grid[r+1][c];
    if(past == 2 and ans1) ans1-=grid[r-1][c];

    return dp[r][c]=grid[r][c]+max(ans1,max(ans2,ans3));
}

int main() {

    cin>>n>>m>>K;
    memset(grid,-1,sizeof grid);
    memset(dp,-1,sizeof dp);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            dp[i][j] = -1,cin>>grid[i][j];



//   for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++)
//            cout<<dp[i][j]<<" ";
//        newl;
//    }

    s=call(0,0,K,0);
    cout<<s<<endl;

}
/*
3 3 2
10 40 50
20 30 60
10 20 70
3 4 1
1 100000 100 1000
2 20 200 2000
6 60 600 6000

3 3 6
1 100000 100
2 20 200
6 60 600

*/
