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
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX= 2e5+5;
void solve() {
    string s,s2,s3;
    cin>>s;
    int n = s.size();
    string t(n,'.');
    int cnt[26] {};
    f(i,n)
    cnt[s[i]-'a']++;
    int l=0,r=n-1;
    for (int c=0; c<26; c++) {
        while (cnt[c]>1)
            cnt[c]-=2,t[l++] = t[r--] = c+'a';

        if(cnt[c]) {
            cnt[c]--;
            if(l==r) t[l]=c+'a';
            else {
                int x=c;
                while(!cnt[++x]);
                if(cnt[x]==r-l) {
                   while (cnt[x]>1)
                       cnt[x]-=2, t[l++] = t[r--] = x+'a';
                    if (cnt[x]) cnt[x]--,t[l++] = x+'a';
                    t[r] = c+'a';
                } else {
                    for (; x < 26; x++)
                        while (cnt[x] > 0)
                            cnt[x]--,t[l++] = x + 'a';
                    t[r] = c+'a';
                }
            }
        }
    }
    pr(t);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
