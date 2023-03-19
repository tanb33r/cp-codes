#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
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
#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
int n ;
int del(int a[],bool b) {
    ll sum = 0ll ;
    int ma = 0,i = 0 ;
    while(i<n) {
        ma = max(ma,a[i]);
        deb(i<<" "<<b);
//        deb((a[i]&1));
        while(i<n and b == (a[i]&1) ) {
//                ps(ekhane);
            ma = max(ma,a[i]);
            i++;
        }
        sum+=ma;
        b=!b;
    }

    return sum;


}
void solve() {
    cin>>n;
    ll ans = 0ll ;
    vector<int> vo,ve;
    f(i,n) {
        int x;
        cin>>x;
        if(x&1) vo.pb(x);
        else ve.pb(x);
        ans+=x;
    }
    ll sum = 0 ;
    sort(vo.rbegin(),vo.rend());
    sort(ve.rbegin(),ve.rend());
    int i = 0 ;
    deb(ans);
    for(; i<min(vo.size(),ve.size()); i++) {
        sum+=ve[i]+vo[i];
        deb(sum);
    }
    if(vo.size()<ve.size()) {
        sum+=ve[i];
        deb(sum);
    }
    if(vo.size()>ve.size()) {
        sum+=vo[i];
        deb(sum);
    }

    pr(ans-sum);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
