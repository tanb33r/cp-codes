#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
#define ff first
#define ss second
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
typedef pair<ll, ll> pll;
int a[100005][2];
int n ;
void solve() {
    int n;
    cin >> n;
    vector<vector<int>> inp;
    vector<vector<int>> inp2;
    f(i,2) {
        inp.pb(vector<int>());
        inp2.pb(vector<int>());
        f(j,n) {
            int num;
            cin >> num;
            inp[i].pb(num);
        }
    }

    pll d = {0, 0};

    for (int i = 0; i < n; ++i) {
        d = {max(d.ff, d.ss + inp[0][i]), max(d.ss, d.ff + inp[1][i])};

    }

    for (int i = 0; i < n; ++i) {
        cout<<d.ff<<" ";
    }
    newl;
    for (int i = 0; i < n; ++i) {
        cout<<d.ss<<" ";
    }
    newl;
    d(max(d.ff, d.ss));
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}

