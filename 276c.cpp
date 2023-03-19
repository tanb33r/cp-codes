#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vprint(vec)        for(int I=0;I<(vec).size();I++)cout<<vec[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

void solve() {
    in(n);
    in(q);
    vector<int>a,p;
    int b[n];
    memset(b,0,sizeof(b));
    f(i,n)  {
        in(x);
        a.pb(x);
    }

    f(i,q)  {
        in(l);
        in(r);
        b[l-1]++;
        b[r]--;
    }
    int bb=0;
    f(i,n)  {
        bb += b[i];
        if(bb)
            p.pb(bb);
    }
    sort(all(a));
    sort(all(p));
    ll ans = 0ll;
    while(p.size()) {
        ans +=a.back()*(ll)p.back();
        a.pop_back();
        p.pop_back();
    }
    d(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

