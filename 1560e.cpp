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
string korede(string x) {
    int S = x.size();
    string ans ;
    int c[S] {0};
    char cc = x.back();
    fr(i,0,x.size()-1)
    if(x[i]>cc) {
        c[i]++;
        cc = x[i];
    }
    char bo;
    if(c[0]) bo = (x[0]);
    else     bo = x[0]+1;

    string d = string(x.size(),bo);
//    deb(bo);
//    deb(d);
    ans += d;
    return ans;

}
void solve() {
    int n,k=0;
    cin>>n>>k;
    string x = to_string(n);
    string ans ;
    if(k==1) {
        ans = korede(x);
    } else {
        ans+=x[0];
        char c =x[0];
        x.erase(0,1);
        ans+=korede(x);
        c=min(ans[0],ans[1]);
        for(int i = 3 ; i<ans.size(); i++)
            ans[i] = c;
    }
    pr(ans);
}





int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
