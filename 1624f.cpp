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
using namespace std;
typedef pair<int,int> pii;
const int MOD= 1e9+7;
ll addM(ll a,ll b) {
    return (a+=b)>=MOD?(a-=MOD):a;
}
ll subM(ll a,ll b) {
    return (a-=b)<0?(a+=MOD):a;
}

//void solve() {
//    int n;
//    cin >> n;
//    int l = 1, r = n;
//    int ans = 0;
//    while(r - l > 1) {
//        int mid = (r+l)/2;
//        cout<<n-mid<<endl;
//        int x;
//        cin>>x;
//        if(x<ans) l = mid;
//        else r = mid;
//
//
//
//        ans = x;
//    }
//
//
//
//}
void solve() {
    int n;
    cin >> n;
    int l = 1, r = n;
    int div = 0;
    while(r - l > 1) {
        int mid = (r + l) / 2;
        cout << "+ "<< n - mid << endl;
        int d;
        cin >> d;
        if(d > div)l = mid;
        else r = mid;
        l = (l + n - mid) % n;
        r = (r + n - mid) % n;
        if(r == 0) r = n;
        div = d;
    }
    cout << "! " << div * n + l;
}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


