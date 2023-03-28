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
const int MAX = 2e5+5;

void solve() {
    ll n;
    string s,t;
    cin>>n>>s;
    vector<vector<int>> pos(26);
    f(i,n) pos[(int) (s[i] - 'a')].pb(i);

    vector<int> order(26);
    iota(all(order), 0);
    sort(all(order), [&](int i, int j) {
        return pos[i].size() > pos[j].size();
    });
    int best = 0;
    ff(cnt,1,27) {
        if(n%cnt==0) {
            int cur = 0;
            f(j,cnt) cur += min(n/cnt, (ll)pos[order[j]].size());

            if(cur>best) {
                best=cur;
                t = string(n, '#');
                vector<char> extra;
                f(j,cnt) {
                    int i = order[j];
                    for(int k = 0; k< n/cnt; k++) {
                        if(k < (int) pos[i].size())
                            t[pos[i][k]] = (char) ('a'+i);
                        else
                            extra.pb((char) ('a'+i));
                    }
                }
                for (char& c : t)
                    if (c == '#') {
                        c = extra.back();
                        extra.pop_back();
                    }
            }
        }
    }
    pr(n-best);
    pr(t);
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


