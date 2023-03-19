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
vector<string>v;


int MI(int n) {
    string s = to_string(n);
    int mi =100;

    string s2 = s;
    f(i,55) {
        int OP=0;
        s = s2;
        for(int j=0; j<min(v[i].size(),s.size()); j++) {
            if(v[i][j] != s[j]) {
                s.erase(j,1);
                j--;
                OP++;
            }

        }
        int k = v[i].size()-s.size() ;
        if(k<0)k*=-1;
        mi = min(mi,OP+k);
    }
    return mi;
}

void solve() {
    int n,ans=0;
    cin>>n;

    pr(MI(n));
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;

    f(i,55) {
        ll ans = (1LL)<<i;
        string s = to_string(ans);
        v.pb(s);
    }
    while(t--)
        solve();
}
