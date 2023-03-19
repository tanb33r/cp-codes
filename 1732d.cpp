// C++ program to demonstrate the
// ordered set in GNU C++
#include <iostream>
using namespace std;

// Header files, namespaces,
// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define ll long long
#define  cerr               if(0)cerr
//#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
//ordered_set o_set;
map<ll,ll> m,mp;

void solve() {


    int q;
    cin>>q;
    while(q--) {
        char c;
        ll x;
        cin>>c>>x;
        if(c=='+') m[x]++;
        else {
            ll multi = x,ans;
            if(mp[x]) multi=mp[x];
            ll j=multi;
            while(m.find(j)!=m.end()) {
                j+=x;
            }
            ans=j;
            mp[x] = ans;
            cout<<(ans)<<'\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    solve();

}
