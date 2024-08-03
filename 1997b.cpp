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


void solve() {
    string s[4];
    int n;
    cin>>n>>s[1]>>s[2];
    s[0] = string(n+2,'x');
    s[3] = string(n+2,'x');
    int a = 1;
    s[1] = 'x'+s[1]+'x';
    s[2] = 'x'+s[2]+'x';
    int ans = 0 ;
    ff(i,1,3) {
        ff(j,1,s[i].size()-1) {
            int cnt = 0;
            int cntx = 0;
            cntx += s[i+1][j+1] == 'x';
            cntx += s[i-1][j-1] == 'x';
            cntx += s[i+1][j-1] == 'x';
            cntx += s[i-1][j+1] == 'x';
            cnt += s[i+1][j] == '.';
            cnt += s[i-1][j] == '.';
            cnt += s[i][j+1] == '.';
            cnt += s[i][j-1] == '.';
            ans += cnt == 3 and cntx == 4;
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
