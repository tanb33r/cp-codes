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
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
#define  in(x)              int x ; cin>>x
#define  printde            for(auto& [x,y] : m) deb(x<<' '<<y)
#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,l,r;
    cin>>n>>l>>r;
    int a[n], b[l], c[r];
    ll ans=0;
    map<int,int> m;
    f(i,l) m[b[i]=II]++;
    f(i,r) m[c[i]=II]--;
    int ch = l-r;
//
    for(auto& [x,y] : m) {
        while(ch>1 and y>1)
            y-=2,ans++,ch-=2;
        while(ch<-1 and y<-1) {
            y+=2,ans++,ch+=2;
//            deb(x<<' '<<y);
        }
    }
    deb(ans);
    int cy = 0;

    printde;
    deb(ch);
    if(ch>0)
        for(auto& [x,y] : m) {
            if(y==1) y-=2,ans++,ch-=2;
            if(ch<=0) break;
        }
    if(ch<0)
        for(auto& [x,y] : m) {
            if(y==-1) y+=2,ans++,ch+=2;
            if(ch>=0)break;
        }
    deb(ans);
//    printde;

    if(ch==0) {
        for(auto& [x,y] : m)  cy+=abs(y);
        deb(cy);
        ans+=cy/2;
    }
    deb(ans);
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
//        hmm(solve());
}
