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

#define  ret                return 0

typedef  long long          ll;
const int mod = 1000000007;

using namespace std;

int main() {
    fastio;
    w(t) {
        in(n);
        in(k);
        if(n == k) {
            yes;
            f(i,k)
            cout<<1<<" ";
            newl;
            continue;
        }

        if(n%2==0) {
            if(k%2==0) {
                if(n<k*2) {
                    no;
                    continue;
                }
                yes;
                f(i,k-1) {
                    cout<<2<<" ";
                    n-=2;
                }
                cout<<n<<endl;
                continue;
            } else {
                if((n-2)<(k-1)*2) {
                    no;
                    continue;
                }
                yes;
                f(i,k-1) {
                    cout<<2<<" ";
                    n-=2;
                }
                cout<<n<<endl;
                continue;

            }


    } else {
        if(k%2==0) {
            no;
            continue;
        }
        yes;
        f(i,k-1) {
            cout<<1<<" ";
            n--;
        }
        cout<<n<<endl;
    }
}
}











