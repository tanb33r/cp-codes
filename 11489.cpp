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
#define  hmm(x)             cout<<((x)?"S":"T")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
int T = 1;
int sum, cnt;
void game(bool b) {
    cout<<"Case "<<T++<<": ";
    if(b) {hmm((!(cnt%2)))}
    else hmm(cnt%2);;
}
void solve() {
    string s ;
    cin>>s;
    sum = 0,cnt = 0;
    map<char,int> m;
    f(i,s.size()) {
        m[s[i]]++;
        sum+=s[i]-'0';
        cnt+= ((s[i]-'0')%3==0);
    }
    bool b = 1;
    if(sum%3) {
        if(sum%3 == 1)
            if(m['1'] or m['4'] or m['7']) {
                game(1);
                return;
            }
        if(sum%3 == 2)
            if(m['2'] or m['5'] or m['8']) {
                game(1);
                return;
            }
    }
    game(0);
    return;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

