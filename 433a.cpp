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


const int mod = 1000000007;
using namespace std;

int main() {
    fastio;
    in(n);
    int a[n];
    int sum = 0;
    map<int,int>m;
    int n2=0,n1=0;
    f(i,n) {
        in(x);
        x/=100;
        (x == 2)? n2++:n1++;
        sum+=x;
    }
    if(sum&1) {
        no;
        ret;
    }

    int sum2 = 0;
    sum2 = n2*2;

    if(sum2 > sum/2) {
        if((sum/2)&1) {
            if(n1>0) {
                yes;
                ret;
            } else {
                no;
                ret;
            }
        }
        yes;
        ret;
    }
    sum2=(sum/2)-sum2;
//    deb(sum2);
    if(n1<sum2) {
        no;
        ret;
    }
    yes;
}
