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
typedef  long long ll;
int a[100005][2];
ll b[100005][2];
int n ;
ll rec(int i, bool f) {
    ll ans, ans2,ans3;
    ans = a[i][f] + ((i<n-1)?(b[i+1][!f]==-1?rec(i+1,!f):b[i+1][!f]):0);
    ans2 = a[i][f] + ((i<n-2)?(b[i+2][f]==-1?rec(i+2,f):b[i+2][f]):0);
    ans3 = a[i][f] + ((i<n-2)?(b[i+2][!f]==-1?rec(i+2,!f):b[i+2][!f]):0);

    b[i][f] = max(max(ans,ans2),ans3);
    return  b[i][f] ;

}
void solve() {
    cin>>n;
    f(i,n)
    cin>>a[i][0];
    f(i,n)
    cin>>a[i][1];

    ll ans = rec(0,0);
    ans = max(ans,rec(0,1));
    d(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    memset(b,-1,sizeof(b));
//    cin>>t;
    while(t--)
        solve();
}
