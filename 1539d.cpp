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
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
#define  S                    second
#define  F                    first
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<ll,ll> pii;

bool cmp(pii a,pii b) {
    return  a.S<b.S;


}
void solve() {
    int n,m ;
    cin>>n;
    ll cost = 0;
    vector< pii > a(n);
    f(i,n) {
        cin>>a[i].S>>a[i].F;
//        a[i].F = max(a[i].S.S-a[i].S.F,0ll);
        cost+=2*a[i].S;

    }
    sort(a.rbegin(),a.rend());
//    sort(a.begin(),a.end(),cmp);
    ll taken = 0;
    ll i=0,j=n-1;
    ll cur =0;
    while(i<=j) {
        ll nite_hobe = a[j].F;
        if(i==j) {
            ll can_take=a[i].S;
            ll to_take=max(0ll,a[i].F-cur);
            can_take=max(0ll,can_take-to_take);
            cost-=can_take;
            break;
        } else if(cur>=nite_hobe) {
            cur+=a[j].S;
            cost-=a[j].S;
            j--;
        } else if(cur+a[i].S<=a[j].F) {
            cur+=a[i].S;
            a[i].S=0;
            i++;
        } else {
            ll to_take=a[j].F-cur;
            cur+=to_take;
            cur+=a[j].S;
            a[i].S-=to_take;;
            cost-=a[j].S;
            j--;
        }
    }
    pr(cost);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
