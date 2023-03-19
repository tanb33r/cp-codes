#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
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
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
int n;
bool bad(vector<int> v) {
    int s=0;
    for (int i:v) s+=i;
    if (s%2) return 0;
    bitset<200005> b;
    b[0]=1;
    for (int i:v) b|=(b<<i);
    return b[s/2];
}
int main() {
    cin>>n;
    vector<int> v(n);
    for (int i=0; i<n; i++)
        cin>>v[i];
    if (bad(v)) {
        pair<int,int> mn(20,0);
        for (int i=0; i<n; i++)
            mn=min(mn,make_pair(__builtin_ctz(v[i]),i+1));
        pr(1);
        pr(mn.second);
    } else
        pr(0);
}
