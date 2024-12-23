/* Tanvir Taher */

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
#define  fopen              freopen("inputf.in", "r", stdin),freopen("outputf.in", "w", stdout),freopen("stderr.in", "w", stderr);
#define  fastio             ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define  PI                 acos(-1.0)
#define  F                  first
#define  S                  second
#define  all(v)             v.begin(),v.end()
#define  mem(a,value)       memset(a,value,sizeof(a))
#define  vi                 vector<int>
#define  ret                return 0
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl;
//#define  cerr               if(0)cerr

typedef  long long          ll;


using namespace std;

const int N = 10000000;
unsigned mark[(N>>5)+1];
int prime[670000], pt = 0;

int GET(int x) {
    return mark[x>>5]>>(x&31)&1;
}

void SET(int x) {
    mark[x>>5] |= 1<<(x&31);
}

void sieve() {
    register int i, j;
    int sqr = N;
    SET(0), SET(1);
    for(i = 2; i <= sqr; i++) {
        if(!GET(i)) {
            prime[pt++] = i;
            for(j = i+i; j <= N; j += i)
                SET(j);
        }
    }
}

void solve(long long n) {
    int i, cnt = 0;
    long long pre = n, ans = -1;
    for(i = 0; prime[i] <= sqrt(n) && i < pt; i++) {
        if(n%prime[i] == 0) {
            ans = prime[i];
            cnt++;
            while(n%prime[i] == 0)
                n /= prime[i];
        }
    }
    if(n != 1)
        ans = n, cnt++;
    if(cnt <= 1)
        ans = -1;
    printf("%lld\n", ans);
}
int main() {
    sieve();
    long long n;
    while(scanf("%lld", &n) == 1 && n) {
        if(n < 0)   n *= -1;
        if(n <= N && GET(n) == 0)
            puts("-1");
        else
            solve(n);
    }
    return 0;
}
