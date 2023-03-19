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
    vector<pair<int,int>> a,b;
    f(i,n) {

        in(x);
        a.pb(make_pair(i,x));
        a.pb(make_pair(x,i));

    }
    sort(all(b));

    f(i,n-1) {
        ll sum = 0ll;
        auto it = lower_bound(all(a),b[i].first) - a.begin();

        if(it == 0)sum+=a.back.first;
        else sum+= a[it-1].first;
        if(it == a.size-1)sum+=a.back.first;
        sum+=a[it-1] + a[it+1];







    }



}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
