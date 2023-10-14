#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define ps(x)              cout<<#x<<"\n"
#define pb                 push_back
#define eb(x)              emplace_back(x)
#define pr(x)              cout<<x<<"\n"
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

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct op {
    int t, x, y, i;
};

void solve() {
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<string>> a(k + 1, vector<string>(n));
    f(z,k+1) f(i, n) cin>>a[z][i];


    vector<int> cnt(k + 1);
    f(z, k + 1) {
        for (int i = 1; i < n - 1; ++i) {
            for (int j = 1; j < m - 1; ++j) {
                bool ok = 1;
                f(t, 4)
                ok &= a[z][i][j] != a[z][i + dx[t]][j + dy[t]];
                cnt[z] += ok;
            }
        }
    }


    vector<int> ord(k + 1);
    iota(ord.begin(), ord.end(), 0);
    sort(ord.begin(), ord.end(), [&cnt](int x, int y) {
        return cnt[x] > cnt[y];
    });

    vector<op> ops;
    f(z, k) {
        f(i, n) f(j, m)
        if(a[ord[z]][i][j]!=a[ord[z+1]][i][j]) {
            a[ord[z]][i][j] ^= 1;
            ops.pb({1, i + 1, j + 1, -1});
        }
        ops.push_back({2, -1, -1, ord[z + 1] + 1});
    }

    cout<<ord[0] + 1<<'\n';
    cout<<ops.size()<<'\n';
    for (auto it : ops) {
        cout<<it.t<<" ";
        if (it.t == 1)
            cout<<it.x<<" "<<it.y<<'\n';
        else
            cout<<it.i<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

