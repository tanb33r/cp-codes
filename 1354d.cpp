#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  in(x)              int x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  fastio             ios::sync_with_stdio(0),cin.tie(0)

//#define  cerr               if(0)cerr
typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int n, q;
vector<int> a, k;

int count_le(int x) {
    int cnt = 0;
    for(auto y : a)
        if(y <= x)
            cnt++;
    for(auto y : k) {
        if(y > 0 && y <= x)
            cnt++;
        if(y < 0 && abs(y) <= cnt)
            cnt--;
    }
    return cnt;
}

int main() {
    fastio;
    in(n);
    in(q);
    a.resize(n);
    k.resize(q);
    f(i,n)
    cin>>a[i];
    f(i,q)
    cin>>k[i];

    if(count_le(int(1e9)) == 0) {
        d(0);
        return 0;
    }
    int lf = 0;
    int rg = int(1e6) + 1;
    while(rg - lf > 1) {
        int mid = (lf + rg) / 2;
        if(count_le(mid) > 0)
            rg = mid;
        else
            lf = mid;
    }
    d(rg);
}
