
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
    in(n);
    vector<int> a(n);
    f(i,n)
    cin>>a[i];
    sort(all(a));
    int ans = 0;
    int mi = a[1] + a[0];
    int ma = a[n-1] + a[n-2];
    ff(A,mi,ma+1) {
        bool b[n]= {0};
        int cnt = 0;
        for(int i = 0; i<n ; i++) {
            if(b[i])continue;
            int lo = lower_bound(all(a),A-a[i])-a.begin();
            if(lo == i)lo++;
            if(lo < n and a[lo] == A-a[i]) {
                while(lo<n and a[lo] == A-a[i] and b[lo]) {
                    lo++;
                    if(lo == i)lo++;
                }
                if(lo<n and a[lo] == A-a[i] and !b[lo])
                    b[i] = b[lo] = 1,cnt++;
            }
        }
        ans = max(ans,cnt);
        if(ans == n/2)break;
    }
    d(ans);
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
