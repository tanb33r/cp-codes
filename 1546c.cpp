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
#define  II                 ({ll l;cin>>l;l;})
#define  ll                 long long
#define  in(x)              int x ; cin>>x
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

bool solve() {
    int n;
    cin>>n;
    int a[n],b[n];
    f(i,n) {
        b[i] = a[i] = II;
    }
    sort(b,b+n);
    map<int, vector<int>> aa, bb;
    f(i,n) {
        aa[a[i]].pb(i%2);
        bb[b[i]].pb(i%2);
    }

    bool val = 1;
    for (auto [x,y]:aa) {
        auto z = bb[x];
        int sa = 0,sb = 0;
        f(i,y.size()) {
            sa+=y[i];
            sb+=z[i];
        }
        val &= (sa==sb);
    }
    return val;
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
//        solve();
        hmm(solve());
}

