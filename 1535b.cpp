#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    vector<pii> p;
    int n,m ;
    cin>>n;
    int a[n];
    f(i,n) {
        int x;
        cin>>x;
        p.push_back({x%2,x});
    }
    sort(all(p));
    int k = n-1;
    ll ans = 0ll;

    f(i,n) {
        if(!(p[i].second&1)) {
            ans+=k--;
        } else {
            for (int j = i+1; j<n; j++)
                if(__gcd(p[i].second,p[j].second)>1)
                    ans++;
        }
    }
    pr(ans);
//        f(i,n) {
//        cout<<p[i].second<<" ";
//    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
