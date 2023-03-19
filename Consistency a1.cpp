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
int T = 1;
void solve() {
    string s;
    cin>>s;
    int v = 0, c  = 0 ;
    map<char,int> m;
    f(i,s.size()) {
        m[s[i]]++;
        if(s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U')
            v++;
        else c++;
    }

    int ma=0,ma2=0;
    f(i,s.size()) {
        if(s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U')
            ma = max(ma,m[s[i]]);
        else ma2 = max(ma2,m[s[i]]);
    }
    int ans =(v-ma)*2 + c;
    int ans2 =(c-ma2)*2 + v;
    cout<<"Case #"<<T++<<": "<<min(ans,ans2)<<"\n";

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    freopen("consistency_chapter_1_input.txt","r",stdin);
    freopen("outputf.txt","w",stdout);

    int t=1;
    cin>>t;
    while(t--)
        solve();
}

