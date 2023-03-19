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
int need, value,ans[501][501];
int n;
bool chk(int x,int y) {
    return x<n and y>=0 and ans[x][y]==0;
}
void dfs(int x, int y) {
    {
        need--;
        ans[x][y] = value;
        if(chk(x,y-1) and need>0) dfs(x,y-1);
        if(chk(x+1,y) and need>0) dfs(x+1,y);

    }
}
void solve() {
    cin>>n;
    int a[n];
    f(i,n) cin>>a[i];
    f(i,n) {
        need = value = a[i];
        dfs(i,i);
    }
    f(i,n) {
        f(j,i+1)cout<<ans[i][j]<<" ";
        newl;
    }

}
int main() {

    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
