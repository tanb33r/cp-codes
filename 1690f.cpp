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
using namespace std;
typedef pair<int,int> pii;
//const int 205=205;
//int gc( int n1, int n2) {
//    if ( n1 == 0 || n2 == 0)
//        return 0;
//    if (n1 == n2)
//        return n1;
//    if ( n1 > n2)
//        return gc (n1 - n2, n2);
//    return gc (n1, n2 - n1);
//}
//
//int lc(int n1, int n2) {
//    return (n1 * n2) / gc(n1,n2);
//}

//void Clear() {
//    f(i,205)
//    vis[i] = 0;
//}

//string dfs(int i,string s = "") {
////    s+=S[a[i]];
//    s+=S[i];
//    vis[i] = 1;
//    if(vis[a[i]]==0)
//        s = dfs(a[i],s);
//
//    return s;
//}
void solve() {
//    Clear();
    int n;
    bool vis[205]{};
    int a[205];
    string S;
    cin>>n>>S;

    ll ans = 1;
    f(i,n) a[i] = II-1;
    f(i,n) {
        string x;
        if(!vis[i]) {
            for(int j=i; !vis[j]; j=a[j]) {
                vis[j]=1;
                x+=S[j];
            }
            int cnt=(x+x).find(x,1);
            ans=lcm(ans,cnt);
        }
    }
    pr(ans);


}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


