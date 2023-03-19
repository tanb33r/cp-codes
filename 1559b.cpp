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

char opposite( char s ) {
    if(s=='R') return 'B';
    else return 'R';
}


string imp ( string s ) {
    char c  ='a';
    f(i,s.size()) {
        if(s[i]!='?') {
            c = s[i];
            continue;
        }

        if(s[i]=='?' and c!='a') {
            while(s[i] == '?') {
                c = opposite(c);
                s[i] = c;
                i++;
            }
            i--;
        }

    }
    return s;
}
void solve() {
    int n,ans=0;
    string s,x,y;
    cin>>n>>s;
    bool b=1;
    x = s;
    f(i,n)
        if(s[i]!='?') {
            b=0;
            break;
        }
    if(b) {
        char c='R';
        f(i,n) {
            cout<<c;
            c = opposite(c);
        }
        newl;
        return;
    }
    s =  imp(s);
    reverse(all(s));
    s =  imp(s);
    reverse(all(s));
//    deb(s);
    pr(s);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
