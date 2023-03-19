#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
#define  hmm(x)             cout<<(x?"YES":"NO")<<endl;
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;

int gcd(int a, int b) {
    return b?gcd(b, a % b):a;
}

int n;
ll ans=0;

vector<int> v,v2;
void sumOfSubset(int p) {

    if(p == n) {
        if(v2.size()) {
            ll k=v2[0];
            f(i,v2.size())
            k |= v2[i];
            ans+=k;
        }
        return;
    }
    v2.pb(v[p]);
    sumOfSubset(p+1);
    v2.pop_back();
    sumOfSubset(p+1);
}


void solve() {
    cin >> n;
    int sum = 0;
    f(i,n) {
        int x;
        cin >> x;
        v.pb(x);
        sum += x;
    }
    sumOfSubset(0);
    pr(ans);

}



int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
