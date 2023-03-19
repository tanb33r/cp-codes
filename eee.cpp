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
    int n,k;
    cin>>n>>k;
    int a[n],t[n],ans[n],ans2[n],fil[n];
    memset(ans,-1,sizeof ans);
    memset(ans2,-1,sizeof ans2);
    memset(t,0,sizeof t);
    memset(fil,0,sizeof fil);
    vector<pii> v;
    f(i,k) {
        int x;
        cin>>x;
        a[i]=x-1;
    }
    f(i,k)cin>>t[i];
    sort(all(v));
    f(i,k) ans2[a[i]] = ans[a[i]] = fil[a[i]] = t[i];
    int curtemp=2*1e9;

    f(i,n) {
        if(curtemp >= 2*1e9 and ans[i] == -1 )
            continue;
        if(ans[i] != -1)
            curtemp = min(curtemp,ans[i]);

            ans[i] = curtemp;
        if(curtemp < 2*1e9)
            curtemp++;
    }
    curtemp=2*1e9;
    for(int i = n-1; ~i; i--) {
        if(curtemp >= 2*1e9 and ans2[i] == -1 )
            continue;
        if(ans2[i] != -1)
            curtemp = min(curtemp,ans2[i]);

            ans2[i] = curtemp;
        if(curtemp < 2*1e9)
            curtemp++;
    }
    /*
    1

10 2
1 10
1 1000000000


    */
    f(i,n) {
        if(ans[i]==-1)
            ans[i]=2*1e9;
        if(ans2[i]==-1)
            ans2[i]=2*1e9;
        cout<<min(ans[i],ans2[i])<<" ";
    }
    newl;
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
