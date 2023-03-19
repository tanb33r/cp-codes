#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cout<<"\n"<<(#x)<<" is "<<(x)<<"\n"
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
const int N = 100000;
int a[N],b[N],c[N],d[N],e[N],n,m,k,l;
void solve() {
    cin>>k>>l;
     cout<<((e[l-1]>=l-k)?"Yes":"No")<<"\n";
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n>>m;
    f(i,n) {
        f(j,m) {
            b[j]=a[j];
            cin>>a[j];
            d[j]=(a[j]>=b[j])?d[j]+1:0;
            e[i] = max(d[j],e[i]);
        }
    }
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

