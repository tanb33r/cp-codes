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

void solve() {
    int n;
    cin>>n;
    int a[n][n];
    memset(a,-1,sizeof a);
    int k = 1;
    if(n==2) {
        pr(-1);
        return;
    }
    int N = n-1;
    f(i,n)
    a[i][i] = k++;
    int l =1;
    while(k<=n*n) {
        for(int i=0; i<n and i+l<n; i++)
            a[i+l][i] = k++;
        for(int i=0; i<n and i+l<n; i++)
            a[i][i+l] = k++;
        l++;
    }

    f(i,n) {
        f(j,n) {
            cout<<a[i][j]<<" ";
        }
        newl;
    }

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
