#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    int n,m,k,ans=0;
    cin>>n;
    char a[n][n];
    int x1,x2,y1,y2,c=0;
    f(i,n) {
        f(j,n) {
            cin>>a[i][j];
            if(a[i][j] == '*' and c ==0) c++,x1 = j,y1 = i;
            else if(a[i][j] == '*' and c == 1) c++,x2 = j,y2 = i;
        }
    }
    if(x1 == x2) {
        int l =0;
        if(x1==0) l=1;
        a[y1][l] = a[y2][l] = '*';
    }

    else if(y1 == y2) {
        int l =0;
        if(y1==0) l=1;
        a[l][x1] = a[l][x2] = '*';
    } else {
        a[y2][x1] = a[y1][x2] = '*';
    }
    f(i,n) {
        f(j,n) {
            cout<<a[i][j];
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
