#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr

using namespace std;
typedef pair<int,int> pii;
typedef  long long          ll;

int n,m, f[11][11][11],a[11][11][11];
void solve() {

    int i,j,k;
    cin>>n;
    memset(a,0,sizeof(a));
    while(n--) {
        cin>>i>>j>>k;
        i=11-i;
        cin>>a[i][j][k];
    }
    memset(f,0,sizeof(f));
    for(i=1; i<=10; i++)
        for(j=1; j<=10; j++)
            for(k=1; k<=10; k++)
                f[i][j][k] = max(f[i-1][j][k],max(f[i][j-1][k],f[i][j][k-1]))+a[i][j][k];
    printf("%d\n",f[10][10][10]);


}

int main() {
//    freopen("commandos.in","r",stdin);

    int t=1;
    cin>>t;
    while(t--)
        solve();

//    fclose(stdin);
}

