#include<bits/stdc++.h>
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
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

    int ans1=0;
    int ans2=0;
    int ans3=0;
    if(k>0 and r>0 ) {
//
        ans1=call(r-1,c,k-1,2);
        if(past == 1) ans1 -= grid[r-1][c];
    }
//  upor theke niche then upore ,, ans -= upor  past = 1
//  niche theke upor then niche ,, ans -= niche past = 2


    ans2=call(r+1,c,k,1);
    ans3=call(r,c+1,k,0);

    if(past == 2) ans2 -= grid[r+1][c];

    return dp[r][c]=grid[r][c]+max(ans1,max(ans2,ans3));
}

int main() {

    cin>>n>>m>>K;
    memset(grid,-1,sizeof grid);
    memset(dp,-1,sizeof dp);

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            dp[i][j] = -1,cin>>grid[i][j];


    s=call(0,0,K,0);


//
//   for(int i=0; i<n; i++) {
//        for(int j=0; j<m; j++)
//            cout<<dp[i][j]<<" ";
//        newl;
//    }
    cout<<s<<endl;

}
/*
3 3 1
10 40 50
20 30 60
10 20 70

3 4 2
1 10 100 1000
2 20 200 2000
6 60 600 6000

3 3 2
1 10 100
2 20 200
6 60 600

3 4 2
5 4 2 3
2 1 3 2
9 4 1 7


*/
