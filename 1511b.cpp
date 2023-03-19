#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int prime[] =  {0,3,11,101, 1019, 10007, 100003, 1000003, 10000019, 100000007};
int prime2[] = {0,5,13,103, 1013, 10009, 100019 ,1000033, 10000169, 100000049};
int dig(int x) {
    int n =0;
    while(x) {
        x/=10;
        n++;
    }
    return n;
}
void solve() {
    int n,m,a,b,c,k,ans=0;
    string s;
    cin>>a>>b>>c;
    int x = prime[c];
    int y = prime[c];
    if(a>dig(x)) {
        x*=prime[a-dig(x)+1];
    }
    if(b>dig(y)) {
        y*=prime2[b-dig(y)+1];
    }

    cout<<x<<" "<<y<<endl;

}


int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
