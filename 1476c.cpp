#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  lin(x)             ll x; cin>>x
#define  print(x)           cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    f(i,n) cin>>c[i];
    f(i,n) cin>>a[i];
    f(i,n) cin>>b[i];

    ll curh,ans=0,prev=0;
    ff(i,1,n) {
        curh = c[i] + 1 + abs(a[i] - b[i]);
        if(a[i]!=b[i])
            curh = max(curh, c[i] + 1 + prev - abs(a[i] - b[i]));
        prev = curh;
        ans = max(ans,curh);
    }
    print(ans);

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

