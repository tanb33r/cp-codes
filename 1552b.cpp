#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  fr(i,n)            for(int i=int(n);~i;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n,ans=0;
    cin>>n;
    int a[n][5];
    f(i,n) {
        vector<pair<int,int> > x;
        f(j,5) {
            int d;
            cin>>d;
            x.emplace_back(d,j);
//            cin>>a[i][j];

        }
        sort(all(x));
        int k = 1;
        f(j,5) {
            if(!j)
                a[i][x[j].S] = k;
            else {
                if(x[j].F ==x[j-1].F)
                    a[i][x[j].S] = k;
                else
                    a[i][x[j].S] = ++k;
            }
        }
    }
    map<short int,short int> m[n];
    f(j,5) {
        f(k,n) {
            ff(i,k,n) {
                if(i==k)continue;
                if(a[k][j]<a[i][j])
                    if(m[k][i]<3)
                        m[k][i]++;
                else m[i][k]++;
            }
        }
    }
    f(i,n) {
        int b = 1;
        for(auto [x,y]:m[i]) {
            if(x==i)continue;
            if(y<3) {
                b=0;
                break;
            }
        }
        if(b) {
            pr(i+1);
            return;
        }
    }
    pr(-1);

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
