#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))

//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MAX= 2e5+5;
void solve() {
    int n;
    string s,s2;
    cin>>n>>s>>s2;
    const int x = n;
//    bitset<x> a(s),b(s2);
    string s3=s;
    f(i,n) s3[i] = s3[i]=='1'?'0':'1';

    if(s!=s2 and s3!=s2) {
        ps(NO);
        return;
    }
    vector<pair<int,int>> ans;
    ps(YES);
    if(s3==s2) {
        ans.pb({1,n});
        s=s3;
    }
    int cnt = 0;
    f(i,n) {
        if(s[i]=='1') {
            cnt++;
            ans.pb({i+1,i+1});
        }
    }
    if(cnt%2==1) {
        ans.pb({1,n});
        ans.pb({1,1});
        ans.pb({2,n});
    }
    cout<<ans.size()<<'\n';
    f(i,ans.size())
    cout<<ans[i].F<< ' '<<ans[i].S<<'\n';

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


