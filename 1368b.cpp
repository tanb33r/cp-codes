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

//#define  cerr               if(0)cerr
typedef  long long          ll;

using namespace std;
void solve() {
    ll k;
    cin >> k;
    int a[11],j=0;
    f(i,10)
    a[i] = 1;
    ll x = 1;
    while (x < k) {
        a[j]++;
        x = 1;
        if(++j>9) j = 0;
        for (int i = 0; i < 10; i++)
            x *= a[i];
    }
    string s = "codeforces", ans = "";

    f(j,10) {
        string s2(a[j],s[j]);
        ans += s2;
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
