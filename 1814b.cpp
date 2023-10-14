#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;

ll sqx = 0;
int x, y;
int SQ(int x) {
    int y = sqrt(x);
    while(y*y < x) y++;
    while(y*y > x) y--;
    return y;
}

int logg(int x) {
    if(x<2) return x;
    int ans = 0;
    while(x>0)
        ans++, x/=2;
    return ans;
}

ll hishab(int vag) {
    ll ans = vag;
    ans--;
    ans += (x+(vag-1))/ vag;
    ans += (y+(vag-1))/ vag;
//    debb(ans);
    return ans;
}

int rec(int x) {
    int y = logg(x);
    if(x<2) return x;


    int gese = (1<<(y));
    int rem = x-(gese);
//    debb(x,y,gese,rem);
//    ans++;
    return y + rec(rem);
}

void solve() {
    cin>>x>>y;
    if(x<y) swap(x,y);
    sqx = 10*(sqrt(x)+10);

    ll ans = 1e9;
    ff(i,1,sqx)
    ans = min(ans, hishab(i));

    pr(ans);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
