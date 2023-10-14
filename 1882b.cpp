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
    ll n;
    cin>>n;
    int a[n];

    vector<int> v[n];
    map<int,int> m, m2;
    set<int> s[n],S;
    f(i,n) {
        int k,x;
        cin>>k;
//        debb(k);
        f(j,k) {
            cin>>x;
            v[i].pb(x);
            s[i].insert(x);
            S.insert(x);
            m[x]++;
        }
    }

    int ans = m.size();



    ll z = 1<<51;
    z--;

    for(int i =


    for(






    int ded = 1000;
    debb(ans);
    f(i,n) {
        m2 = m;
        set<int> s;
        int c = 0 ;
//        debb(v[i].size());
        f(j,v[i].size()) {
            m2[v[i][j]]--;
            if(m2[v[i][j]] == 0) {
                c++;
                debb(v[i][j]);
            }
        }
        debb(c);
        if(c)
            ded = min(c,ded);
    }
    ded = ded==1000?0: ded;
    pr(ans-ded);
}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
