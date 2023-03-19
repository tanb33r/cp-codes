#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
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
const int MOD= 1e9+7;
map<string,int> mp;

ll addM(ll a,ll b) {
    return (a+=b)>=MOD?(a-=MOD):a;
}
ll subM(ll a,ll b) {
    return (a-=b)<0?(a+=MOD):a;
}

void solve() {
    mp.clear();
    int n ;
    cin>>n;
    int ok=0;

    f(i,n) {
        string s;
        cin>>s;
        mp[s]=1;
        if(s.size()==1||(s.size()==2&&s[1]==s[0])) ok=1;
        reverse(all(s));
        if(mp[s]||(mp[s.substr(0,s.size()-1)])) ok=1;
        for(char ch='a'; ch<='z'; ch++)
            if(mp[s+ch]) ok=1;
    }
    hmm(ok);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


