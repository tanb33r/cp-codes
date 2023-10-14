#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n;
    string s;
    cin>>n>>s;
    vector<ll> a;
    ll ans = 0;
    f(i,n) {
        int x;
        cin>>x;
        a.pb(x);
    }
    int cnt = count(all(s),'1');
//    if(cnt == a.size()) {
//        ll k = accumulate(all(a),0ll);
//        pr(k);
//        return;
//    }
    int i = 0;
//    int vis [n+2]= {};
    while(i<n) {
        int j = i;
//        deb(i);
        ll sum = 0;
//        if(j<n and s[j]=='1') {
            while(j<n and s[j]=='1') {
                sum+=a[j++];
            }
            j--;
        }
        deb(i<< ' '     <<j   );
        deb(a[i-1]<< ' ' <<a[j]);
        if(i>0 and a[i-1]>a[j]) {
            ans+=sum-a[j]+a[i-1];
                deb(sum);
        } else {
            ans+=sum;
        }
        deb(ans);
        i = j+1;
//        deb(j);
    }
    // 1 2 01 20 10
    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
