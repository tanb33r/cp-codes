#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes                cout<<"YES"<<endl
#define  no                 cout<<"NO"<<endl
#define  pb(x)              push_back(x);
#define  in(x)              int x; cin>>x
#define  lin(x)             ll x; cin>>x
#define  w(t)               int t; cin>>t; while(t--)
#define  d(x)               cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  fopen              freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
typedef  long long          ll;

const int mod = 1000000007;
const int S = 1e5+5;
using namespace std;

bool v[S];
ll fn[S];
ll cnt[S];

int mm;
int a[S];
map<int,ll> mi;
ll rec(int i) {

    if(i==1) return cnt[1];

    if(i<mm) ret;

    if(!fn[i])
        fn[i] = max(rec(i-1),rec(i-2)+cnt[i]*i);

    return fn[i];
}
int main() {
    in(n);
    int m = 0;
    mm = INT_MAX;
    memset(r,-1,sizeof(r));
    f(i,n) {
        cin>>a[i];
        m = max(m,a[i]);
        mm = min(mm,a[i]);
        mi[a[i]]++;
        cnt[a[i]]++;
    }
    sort(a,a+n);
    fn[0] = 0;
    fn[1] = cnt[1];
    ll ans = rec(m);
    d(ans);
}
