/* Tanvir Taher */

#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes 		        cout<<"YES"<<endl
#define  no		            cout<<"NO"<<endl
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
typedef  long long          ll;

const int mod = 1000000007;
const int S = 1e5+5;
using namespace std;
bitset<S> prime;
void sieve() {
    prime[0] = prime[1] = 1;
    for(int i = 4 ; i < S; i+=2)
        prime[i] = 1 ;
    for(int i = 3 ; i*i < S; i+=2)
        if(!prime[i])
            for(int j = i*i ; j < S; j+=2*i)
                prime[j] = 1 ;
}
int main() {
    fastio;
    sieve();
    in(n);
    in(nn);
    int a[n][nn];
    int x;
    f(i,n) {
        f(j,nn) {
            cin>>x;
            int k = 0;
            a[i][j] = k;
            if(prime[x]) {
                while(prime[x++])
                    k++;
                a[i][j] = k;
            }
        }
    }
    int sum=INT_MAX;
    int ans=0;
    f(i,n) {
        ans = 0;
        f(j,nn)
        ans += a[i][j];
        sum = min(ans,sum);
    }

    f(j,nn) {
        ans = 0;
        f(i,n)
        ans += a[i][j];
        sum = min(ans,sum);
    }
    d(sum);
}




