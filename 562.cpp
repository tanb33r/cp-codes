#include <bits/stdc++.h>
#define  f(i,n)       for(int i=0; i<n; i++)
#define  ff(i,j,n)    for(int i=int(j);i<=int(n);++i)
#define  sf(i)        scanf("%d",&i)
#define  pf(i)        printf("%d",i)
#define  pb(x)        push_back(x);
#define  in(x)        int x; cin>>x
#define  w(t)         int t; cin>>t; while(t--)
#define  d(x)         cout<<x<<"\n"
#define  endl         "\n"
#define  fopen        freopen("in.txt", "r" , stdin),freopen("out.txt", "w" , stdout)
#define  fastio;      ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define  PI           acos(-1.0)
#define  all(v)       v.begin(),v.end()
#define  mem(a,value) memset(a,value,sizeof(a))
#define  vi           vector<int>

typedef long long     ll;

const int mod = 1000000007;
using namespace std;

int main() {

    w(t) {
        bool dp[50005] = {0};

        dp[0]=1;
        in(n);
        int a[n];
        int sum=0;
        f(i,n) cin>>a[i],sum+=a[i];
        int mid = sum/2;

        f(i,n)
            for(int j=mid; j-a[i]>=0; j--)
                dp[j] |= dp[j-a[i]];

        for(int i=sum/2; i>=0; i--)
            if(dp[i]) {
                cout<<abs((sum-i)-i)<<endl;
                break;
            }

    }
}
