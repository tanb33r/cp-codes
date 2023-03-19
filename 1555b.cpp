#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
void solve() {
    int W,H,x1,y1,x2,y2,w,h;
    cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
    int wid = abs(x2-x1),hei=abs(y2-y1);
    if(hei+h>H and wid+w>W) {
        pr(-1);
        return;
    }
    int dis=1e9;
    if(hei+h<=H) {
        dis = h - y1;
        dis = min(dis,h - (H-y2));
    }
    if(wid+w<=W) {
        dis = min(dis,w - x1);
        dis = min(dis,w - (W-x2));
    }
    if(dis<0) dis = 0;
    double ans = dis;

    pr(ans);

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cout<<fixed<<setprecision(9);
    int tc=1;
    cin>>tc;
    while(tc--)
        solve();
}
