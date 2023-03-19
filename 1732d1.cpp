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
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
ordered_set o_set;
ll bs(ll x) {
    ll l = 0;
    ll r = 1e18+2;
        ll mid = l + (r - l) / 2;
    while(l<r) {
        mid = l + (r - l) / 2;
        ll ret = o_set.order_of_key(mid);
        deb(ret);
        if( (mid - ret ) < x) {
            l = mid + 1;
        } else if( (mid - ret ) >= x) {
            r = mid;
        }
    }
    deb(l<<' '<<r<<" "<<mid);
    return r-1;
}
void solve() {


    int q;
    cin>>q;
            o_set.insert(0);
    while(q--) {
        char c;
        ll x;
        cin>>c>>x;
        if(c=='+')
            o_set.insert(x);
        else {
            cout <<  bs(x) <<endl;
        }
    }
}
int main() {
    solve();

}
