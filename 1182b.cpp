#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
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
char a[500][500];
int i,j,n,m,x;
void solve() {
    cin>>n>>m;
    f(i,n)
    f(j,m)
    cin>>a[i][j];

    f(i,n)
    f(j,m)
    if(a[i][j]=='*'&&i>0&&i<n-1&&j>0&&j<m-1&&a[i-1][j]=='*'&&a[i+1][j]=='*'&&a[i][j+1]=='*'&&a[i][j-1]=='*') {
        x=i+1;
        while(a[x][j]=='*') a[x++][j]='.';
        x=i-1;
        while(a[x][j]=='*') a[x--][j]='.';
        x=j+1;
        while(a[i][x]=='*') a[i][x++]='.';
        x=j-1;
        while(a[i][x]=='*') a[i][x--]='.';
        a[i][j]='.';

        f(i,n)
        f(j,m)
        if(a[i][j]=='*') {
            cout<<"NO";
            return  ;
        }
        cout<<"YES";
        return  ;
    }
    cout<<"NO";
    return  ;
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
