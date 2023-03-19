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
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n;
    cin>>n;
    int a[n];
    priority_queue<int, vector<int>, greater<int> > p;
    f(i,n) cin>>a[i];
    ll ans = 0,sum=0;
    f(i,n) {
        if(sum+a[i]>=0) {
            ans++;
            sum+=a[i];
            if(a[i]<0) p.push(a[i]);
        } else if(!p.empty() and p.top() < a[i]) {
            sum-=p.top();
            sum+=a[i];
            p.pop();
            p.push(a[i]);
        }
    }
    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
//        hmm(solve());
}
