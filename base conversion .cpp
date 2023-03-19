#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
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
    int n,k;
    cin>>n;
    string s, t;
    cin>>k>>s>>t;
    vector<int> a = get(s), b = get(t);

    fr(i,k,0) {
        a[i]+=b[i];
        if(i) {
            a[i-1]+=a[i]/26;
            a[i]%=26;
        }
    }
    vout(a);
    f(i,k+1) {
        int rem = a[i]%2;
        a[i]/=2;
        if(i+1<=k)
            a[i+1] += rem * 26;
    }

    for (int i = 1; i <= k; ++i) {
        cout<<char('a' + a[i]);
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

