#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb                 emplace_back
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<__LINE__<<"line  "<<(#x)<<" = "<<x<<"\n"
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
    int n, m,q;

    cin>>n;
    ll cnta[26]= {};
    ll cntb[26]= {};
    cnta[0]=1;
    cntb[0]=1;
    f(i,n) {
        int x, k;
        string s;
        cin>>x>>k>>s;
        for(char j = 'a'; j<='z'; j++) {
            int cnt = count(all(s),j);
            if(x==1)
                cnta[j-'a']+=cnt*k;
            else
                cntb[j-'a']+=cnt*k;
        }
        ll tota = 0;
        ll totb = 0;

        for(char j = 'a'; j<='z'; j++) {
            tota+=cnta[j-'a'];
            totb+=cntb[j-'a'];
        }
        bool ok = 0 ;
//        deb()
        for(char j = 'z'; j>='a'; j--) {
            if(cntb[j-'a']==totb and cnta[j-'a']==tota) {
                if(totb>tota)
                    ok = 1;
//                ps(1st);
            }

        }
        if(!ok) {
            ll cuma = 0;
            for(char j = 'z'; j>='a'; j--) {
                if(cntb[j-'a']>0 and cnta[j-'a'] + cuma !=tota)
                    ok = 1;
                cuma+=cnta[j-'a'];
            }
        }
//        if(ok)
//        {
//
//
//        }
        hmm(ok);
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


