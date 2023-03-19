#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
//#define  pb(x)              push_back(x)
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

void solve() {
    string s,s2;
    vector<string> w;
    while(cin>>s and s!="*") {
        w.push_back(s);
    }
//    cin.ignore();

//    cin.ignore();

//    string line;
    while (cin>>s) {
        cin >> s2;
        queue<string> q;
        map<string,int> m;
        q.push(s);
        while(!q.empty() && m[s2] == 0) {
            string u = q.front();
            q.pop();
            for (int  i = 0; i < w.size(); ++i) {
                string v = w[i];
                if(m[v]==0 and u.size() == v.size()) {
                    int dif = 0 ;
                    f(j,u.size()) {
                        dif += u[j]!=v[j];
                    }
                    if(dif == 1) {
                        m[v] = m[u]+1;
                        q.push(v);
                    }
                }
            }
        }
        cout<<s<<" "<<s2<<" "<<m[s2]<<"\n";

    }

}
int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--) {
        solve();
        if(t)cout<<"\n";
    }
}
