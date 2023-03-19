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
const int N = 1001;

vector<int> v(N,N);
void solve() {
    int n, k ;
    cin>>n>>k;

    vector<int> b(n), c(n);
//    for (int &x : b) sum+= x=II;
    int sum = 0;

    for (int &x : b) cin >> x;
    for (int &x : c) cin >> x;
    for (int &x : b) sum+=v[x];

    k = min(k, sum);
    vector<int> dp(k + 1, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = k - v[b[i]]; j >= 0; j--) {
            dp[j + v[b[i]]] = max(dp[j + v[b[i]]], dp[j] + c[i]);
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
v[1]=0;
    for(int i = 1 ; i<N; i++)
        for(int x = 1 ; x<=i; x++) {
            int ans = i+i/x;
            if(ans<N) v[ans] = min(v[i]+1,v[ans]);
        }

    int t=1;
    cin>>t;
    while(t--)
        solve();
}


