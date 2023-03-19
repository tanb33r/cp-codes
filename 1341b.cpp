#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<n; i++)
#define  ff(i,j,n)          for(int i=int(j);i<=int(n);++i)
#define  sf(i)              scanf("%d",&i)
#define  pf(i)              printf("%d",i)
#define  yes 		        cout<<"Yes"<<endl
#define  no		            cout<<"No"<<endl
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
using namespace std;
ll ans  = 0 ;
int ma = 0, l, b[200000+5];

void pea(int a[],int n) {
    int p = 0;
    ff(i,1,n-1) {
        if(a[i]>a[i-1] and a[i]>a[i+1])
            p++;
        b[i] = p;
    }
}


int main() {
    fastio;
    w(t) {
        memset(b,0,sizeof(b));
        ans = ma = 0,l=1;
        in(n);
        in(k);
        int a[n];
        f(i,n)  cin>>a[i];
        pea(a,n);


        for(int  j = 0 ; j<=n-k ; j++) {
            int p  = b[j+k-2] - b[j];
            if(ma<p) {
                ma = p;
                l = j+1;
            }
        }

        cout<<ma+1<<" "<<l<<endl;
    }
}
