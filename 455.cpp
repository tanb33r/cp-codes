/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  fopen              freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
typedef long long           ll;

const int mod = 1000000007;
const int SIZE = 1e5+5;
const int maxn = 111111;
using namespace std;

int n;
map<int, int> m;
vector<pair<int, int> > v;
long long f[maxn];

int main() {

    in(n);
    f (i,n) {
        in(x);
        m[x]++;
    }
    for (auto it : m) {
        v.push_back(make_pair(it.F, it.S));
    }
    f(i,v.size()) {
        int pr = i - 1;

        while (pr >= 0 && v[pr].F + 1 == v[i].F)
            pr--;

        if (pr == -1) f[i] = 1LL * v[i].F * v[i].S;
        else f[i] = f[pr] + 1LL * v[i].F * v[i].S;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout << f[v.size()-1] <<endl;
}
