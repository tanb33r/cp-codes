#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MAX= 2e5+5;

vector<int> primefactor(int n) {
    vector<int> arr;
    while(n%2==0) {
        n/=2;
        arr.pb(2);
    }

    int i=3;
    while(i*i<=n) {
        if(n%i==0) {
            arr.pb(i);
            n=n/i;
        }
        i+=2;
    }
    if(n>2) {
        arr.pb(n);
    }
    return arr;
}



void solve() {
    int n;
    cin>>n;
    ll a[n];
    ll ans = 0;
    f(i,n)cin>>a[i];
    if(n&1) {
        pr(-1);
        return;
    }
    int sum = accumulate(a,a+n,0);
    if(sum==n or sum == -n) {
        pr(1);
        pr(1<<' '<<n);
        return;
    }

    if(sum<0) {
        f(i,n)a[i]*=-1;
        sum*=-1;
    }

    int vis[n] = {};
    vector<pair<int,int>> ams;
    int k = sum/2;
    for(int i=1; k and i<n; i++) {
        if(a[i]==1) {
            vis[i] = 1;
            vis[i-1] = 1;
            k--;i++;
        }
    }
    if (k!=0) {
        k=sum/2;
        int vis2[n] = {};
        for(int i=2; k and i<n; i++) {
            if(a[i]==1) {
                vis2[i] = 1;
                vis2[i-1] = 1;
                k--;i++;
            }
        }
        f(i,n) {
            if(vis2[i]==1) {
                ams.pb({i,i+1});
                i++;
            } else {
                ams.pb({i,i});
            }
        }
    } else {
        f(i,n) {
            if(vis[i]==1) {
                ams.pb({i,i+1});
                i++;
            } else {
                ams.pb({i,i});
            }
        }
    }
    sort(all(ams));
    cout<<ams.size()<<'\n';
    f(i,ams.size())
    cout<<ams[i].F+1<<' '<<1+ams[i].S<<'\n';

}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


