#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
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

//#define  cerr               if(0)cerr

typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {

    freopen("output.txt", "r", stdin);
    freopen("me.txt", "w", stdout);
    w(t) {
        lin(n);
        ll sum = 0;
        ll k =3;
        ll k2 =1;
        ll m=1;
        while (k<=n) {
            sum+=(pow(k,2)  - pow(k-2,2)) * m;
            k += 2;
            m++;
        }
        d(sum);

    }
}

