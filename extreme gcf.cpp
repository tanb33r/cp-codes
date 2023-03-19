#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x;
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio       ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>
#define N 10005
typedef long long     ll;
using namespace std;
const int MOD=10056;
ll num[N],ans[N];
void fa(ll t) {

    for(ll i=1; i*i<=t; i++) {
        if(t%i==0) {
            num[i]++;
            if(i*i!=t)
                num[t/i]++;
        }
    }
}

ll cal(ll x) {
    return x*(x-1)*(x-2)*(x-3)/24;
}

int main() {


    int k=1,t;
    cin>>t;
    while(t--) {
        memset(num,0,sizeof(num));
        in(n);

        ll v;

        f(i,n) {
            scanf("%lld",&v);
            fa(v);
        }

        for(int i=N; i>=1; i--) {
            ans[i]=cal(num[i]);
            for(int j=i*2; j<=N; j+=i)
                ans[i]-=ans[j];
        }
        printf("Case %d: %lld\n",k++,ans[1]);
    }
    return 0;
}
