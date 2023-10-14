
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
#define  len(s)             (int)s.size()
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int, int> pii;
const int MAX = 2e5 + 5;

int ans = 0;
bool ok = true;
void Find(int a, int b, string &t,
          vector<string>&str, vector<pair<int, int>>&match) {
    int Max = 0, id = -1, pos = -1;
    for(int i = a; i <= b; i++) {
        for(int j = 0; j < len(str); j++) {
            string s = str[j];
            if(i + len(s) > len(t) || i + len(s) <= b) continue;
            if(t.substr(i, len(s)) == s) {
                if(i + len(s) > Max) {
                    Max = i + len(s);
                    id = j;
                    pos = i;
                }
            }
        }
    }
    if(id == -1) {
        ok = 0;
        return;
    }

    else {
        match.emplace_back(id, pos);
        ans++;
        if(Max == len(t)) return;
        else Find(max(pos + 1, b +1), Max, t, str, match);
    }
}
void solve() {
    ans = 0;
    ok = true;
    int n;

    string t;
    cin >> t >> n;


    vector<string>s(n);
    vector<pair<int, int>>match;


    f(i,n) cin >> s[i];

    Find(0,0,t,s, match);
    if(!ok) return void(ps(-1));
    else {
        cout << ans << '\n';
        for(auto &p : match) cout << p.first + 1 << ' ' << p.second + 1 << '\n';
    }

}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
        solve();
}


