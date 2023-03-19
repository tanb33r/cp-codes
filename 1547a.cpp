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
    int a1,a2,b1,b2,f1,f2;
    cin>>a1>>a2>>b1>>b2>>f1>>f2;

    int ans = abs(a1-b1) + abs(a2-b2);
    if(a1 == b1 and f1 == a1) {
        if(max(a2,b2)>f2 and min(a2,b2)<f2)
            ans+=2;
    } else if(a2 == b2 and f2 == a2)
        if(max(a1,b1)>f1 and min(a1,b1)<f1)
            ans+=2;
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
