#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  all(v)             v.begin(),v.end()

//#define  cerr               if(0)cerr
typedef  long long          ll;

using namespace std;

int main() {
    fastio;
    w(t) {
        int grp=0;
        in(n);
        vector<int> v ;
        for(int i=0; i<n; i++) {
            in(x);
            v.pb(x);
        }
        sort(all(v));
        for(int i=0; i<n;) {
            for(int j=1; j<=n and i!=n; j++,i++) {
                if(j==v[i]) {
                    grp++,i++;
                    break;
                }
            }
        }
        d(grp);
    }
}
