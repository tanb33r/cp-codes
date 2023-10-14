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
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
const int N = 1e5+7;
using namespace std;
typedef pair<int,int> pii;
vector<int>v[N];
void solve() {
    int n,m;
    cin>>n>>m;
//    deb(n);
//    deb(m);
//    int a[n];
    ll ans = 0;
    map<int,int> s;
    set<int>R;
    vector<pair<int,int>> vp;
    f(i,m) {
        int x,y;
        cin>>x>>y;
        if(x>y) swap(x,y);
        if(!s[x])s[x]=1e6;
        s[x] = min(s[x],y);
//        if(r.back()!=y)
//        r.pb(y);
        vp.pb({y,x});

//        deb(x<<y);
    }
//    if(vp.back().F!=n) vp.pb({n,n});
    sort(all(vp));
//    f(i,N)
//        sort(all(v[i]));

    int i = 1;
    int j = 0;
    int limit = n;
    map<int,int>mpp;
    for(int j =0  ; j<vp.size(); j++) {
        limit = vp[j].F;
        if(mpp[limit])
            continue;

        if(j) {
            ll x = vp[j-1].F-vp[j-1].S-2;
//        if(limit ==n) x++;
//        if(x==0) ans++;
//        else
            ans+= x*(x+1)/2;
//            ans-=x;
//            ans++;
        }
        mpp[limit]++;
        ll x = limit-i;
//        if(limit ==n) x++;
//        if(x==0) ans++;
//        else
        ans+= x*(x+1)/2;
//        ans+=x;
//        deb(limit<<' '<<i);
//        if(limit==i) j++;

             i = limit;
    }
    if(i!=n) {
        ll x = n-i+1;
        ans+= x*(x+1)/2;
    } else ans++;

    pr(ans);
//    pr(ans);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}



