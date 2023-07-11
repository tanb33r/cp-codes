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

int n,a,b,i,m[MAX];
vector<int> v[MAX];
set<int> s;
void dfs(int x, int y, int z) {
    s.insert(y);
    m[x] = y;
    int a=1;
    for (auto j : v[x]) {
        while(a==y or a==z) a++;
        if(m[j]==0) dfs(j,a++,y);
    }
}


void solve() {
    cin>>n;

    while(i<n-1) {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        i++;
    }
    i=0;

    dfs(1,1,0);

    cout<<s.size()<<endl;;

    while(i<n) {
        cout<<m[i+1]<<" ";
        i++;
    }

}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}