#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<#x<<"\n"
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
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int a,n,l,r;
    cin>>n>>l>>r;
    vector<int> v;
    f(i,n) {
        cin>>a;
        v.pb(a);
    }
    sort(all(v));
    ll ans=0;
    f(i,n-1) {
        if(v[i]+v[i+1]>r) break;
        if(v[i]+v[n-1]<l) continue;

        int idx1=lower_bound(v.begin()+i+1, v.end(), l-v[i])-v.begin();
        int idx2=upper_bound(v.begin()+i+1, v.end(), r-v[i])-v.begin();

        ans+=(idx2-idx1);
    }
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
