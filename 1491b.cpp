#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  lin(x)             ll x; cin>>x
#define  print(x)           cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

void solve() {
   int n,u,v;
    cin>>n>>u>>v;
    int  a[n+10] = {0};
    int m=-1;
    f(i,n) {
        cin>>a[i];
        if(i) {
            m = max(m,abs(a[i]-a[i-1]));
        }
    }

    if(m>1) {
        print(0);
        return;
    } else if(m==0) {
        if(v<u) {
            print(v*2);
            return;
        } else {
            print(v+u);
            return;
        }
    } else {
        int ans = min(v,u);
        print(ans);
        return;
    }
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}

