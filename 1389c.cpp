#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
typedef  long long          ll;
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    int ch[10] = {0};
    f(i,s.size())
    ch[s[i]-'0']++;
    int m = 0,mm=0;
    f(i,10)
    mm = max(m,ch[i]);

    f(j,10) {

        char c = j+'0';
        if(ch[j]==0) continue;
        ff(ii,c-'0'+1,10) {
            char x='@';
            int br = 0;
            char cc=ii+'0';
//            deb(cc);
            f(i,s.size()) {
                if(x=='@') {
                    if(s[i] == c)
                        x = cc,br++;
                    else if(s[i] == cc)
                        x = c,br++;
                } else if(s[i] == x)
                    if(x == cc)
                        x = c,br++;
                    else if(x==c)
                        x = cc,br++;
            }
//            if(c == '2')
//            deb(br);
//            deb(m);
//            if(m<br) {
//                deb(c);
//                deb(cc);
                m = max(br,m);
//            }
        }
    }
    if(m&1)m--;
    cout<<(m>mm ?min(n-m,n-2):min(n-mm,n-2))<<endl;

//    d(ans);


}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
