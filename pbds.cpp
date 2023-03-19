#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

using namespace __gnu_pbds;

typedef pair<int, int> node;
typedef tree<node, null_type, less<node>,
        rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ordered_set s;
        long long cnt = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            int l = s.order_of_key(node(a, 0));
            int g = i - s.order_of_key(node(a, n));
            cnt += min(l, g);
            s.insert(node(a, i));
        }
        cout << cnt << '\n';
    }
}
