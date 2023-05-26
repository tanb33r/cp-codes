#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            f(I,(v).size())cout<<v[I]<<" ";cout<<"\n"
#define  AI(a,n)            f(I,n)a[I]=II;
#define  AO(a,n)            f(I,n)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  vpr(x)             return void(pr(x))
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

typedef pair<int,int> pii;
const int MAX = 2e5+5;
vector<string> s;
vector<int> C;
int N,M;
map<vector<int>, int> mp;
int dp(int i, int j, int dir, int c, int cost) {

    if(i<0 or i>=N or j<0 or j>M+1) return 1e9;

    c += (s[i][j]=='1');

    if(c == C[i] and i==0) return cost;

    if(c == C[i]) {
        vector<int> v= {i-1,0,1, cost+j+1};
        vector<int> v2= {i-1,M+1,-1, cost+(M+2)-(j)};
        if(mp.count(v)==0) mp[v] = dp(i-1,0, 1, 0, cost+j+1);
        if(mp.count(v2)==0) mp[v2] = dp(i-1,M+1, -1, 0, cost+(M+2)-(j));

        return min(mp[v],mp[v2]);
    }
    vector<int> v{i,j+dir, dir, cost+1};
    if(mp.count(v)==0) mp[v] = dp(i,j+dir, dir, c, cost+1);
    return mp[v];

}

void solve() {
    cin>>N>>M;
    int tot = 0;
    f(i,N) {
        string x;
        cin>>x;
        int cnt = count(all(x),'1');
//        debb(x,cnt);
        if(!s.size() and cnt==0)
            continue;
        C.pb(cnt);
        s.pb(x);
        tot+=cnt;
    }
    N = s.size();
    if(!tot) vpr(0);


    ll ans = dp(N-1,0,1,0,0);
    pr(ans);
}


int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
