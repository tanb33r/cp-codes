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
ll n, ind;
string emp, boss;

map<string,int> IND;
vector<vector<int>> graph;

int mem[201][2]; // state: employeeIdx, sk?
bool repeat[201][2];

ll dp(int i, bool sk) {
    if(mem[i][sk] != -1) return mem[i][sk];

    int ans = 0;
    bool same = 0;

    if(sk)
        for(auto v: graph[i]) {
            int a = dp(v,0);
            int b = dp(v,1);
            ans += max(a,b);
            if(a==b) same = 1;
            else if(a<b) same |= repeat[v][1];
            else same |= repeat[v][0];
        }

    else {
        ans = 1;
        for(auto& v : graph[i]) {
            ans += dp(v, 1);
            same |= repeat[v][1];
        }
    }

    repeat[i][sk] = same;
    return mem[i][sk] = ans;
}

void solve() {
    ind = 1;
    IND.clear();
    graph.assign(n,vector<int>());
    memset(mem, -1, sizeof mem);
    memset(repeat, 0, sizeof repeat);
    cin>>boss;
    IND[boss] = 0;
    f(i,n-1) {
        cin>>emp>>boss;
        if(!IND.count(emp)) IND[emp] = ind++;
        if(!IND.count(boss)) IND[boss] = ind++;
        graph[IND[boss]].push_back(IND[emp]);
    }
    int ans = dp(0,0);
    int ans2 = dp(0,1);

    bool same;

    if(ans == ans2) same = 1;
    else if(ans > ans2) same = repeat[0][0];
    else same = repeat[0][1], ans = ans2;

    cout<<ans<<' '<<(same ? "No" : "Yes")<<'\n';

}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    while(cin>>n,n)
        solve();
}
