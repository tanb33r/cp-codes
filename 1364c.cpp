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
    int a[n+1],ans[n+1];
    memset(ans,0,sizeof(ans));
    memset(a,0,sizeof(a));
    vector<int> v;
    map<int,int> m;
    ff(i,1,n) {
        cin>>a[i];
        m[a[i]]++;
    }
    ff(i,1,n) {
        if (a[i] == a[i - 1]) {
            v.pb(i);
            continue;
        }

        if(a[i] > i) {
            d(-1);
            return;
        }
        if (a[i] > a[i - 1] + (int)v.size() + 1) {
            d(-1);
            return;
        }
        int x = a[i - 1];
        ans[i] = x++;
        while(x < a[i] and !v.empty()) {
            ans[v.back()] = x++;
            v.pop_back();
        }
    }


    int x = a[n] + 1;
    while(!v.empty()) {
        ans[v.back()] = x;
        v.pop_back();
    }

    ff(i,1,n)
    cout<<ans[i]<<" ";

    newl;
}





int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//        cin>>t;
    while(t--)
        solve();
}
