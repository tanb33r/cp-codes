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
typedef  long long          ll;
using namespace std;

void solve() {
    in(n);
    in(k);
    int b[k];
    vector<int> a;
    f(i,n)    {
        int x;
        cin>>x;
        a.pb(x);
    }
    f(i,k)    cin>>b[i];
    sort(all(a));
    sort(b,b+k);
    ll ans=0ll;
    f(i,k)    {
        ans+=a.back();

        b[i]--;
        if(!b[i]) ans+=a.back();
        a.pop_back();
    }
    reverse(b,b+k);

    int j = 0;
    f(i,k) {
        if(b[i]) ans+=a[j++];
        b[i]--;
        while(b[i]-- >0)j++; }
    d(ans);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
