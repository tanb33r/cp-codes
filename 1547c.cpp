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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  in(x)              int x ; cin>>x
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int l,n,m ;
    cin>>l>>n>>m;
    int a[n+3],b[m+3],ans[n+m+3];
    f(i,n) cin>>a[i];
    f(i,m) cin>>b[i];
    int i=0,j=0,k=0;
    int coun = 0;
    while(1) {
        while(i<n and a[i] == 0)
            coun = 0, l++,  ans[k++] = a[i++];
        while(j<m and b[j] == 0)
            coun = 0, l++, ans[k++] = b[j++];
        while(i<n and a[i]!=0 and a[i]<=l)
            coun = 0, ans[k++] = a[i++];
        while(j<m and b[j]!=0 and b[j]<=l) {
            coun = 0, ans[k++] = b[j++];
        }
        if(coun>2) break;
        coun++;
    }
    if(k==n+m) arrp(ans,k);
    else pr(-1);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
