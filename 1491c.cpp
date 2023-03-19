#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<endl
#define  pb(x)              push_back(x);
#define  lin(x)             ll x; cin>>x
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vi                 vector<int>
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  vprint(v)          for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<endl
#define  deb(x)             cerr<<"\n"<<(#x)<<" is "<<(x)<<endl
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
typedef  long long ll;
int  a[10010] = {0};
int  d[10010] = {0};
int  b[5010] = {0};
int  cnt[5010] = {0};
ll ans = 0;
int n;

void solve2() {

    cin>>n;
    int k = 0;
    int l = 0;
    memset(a,0,sizeof(a));
    memset(d,0,sizeof(d));
    f(i,n) {
        cin>>a[i];
        a[i];
    }

    ll ans = 0 ;
    f(i,n) {
        if(d[i]) {
            int j = a[i];
            int k = d[i];
            if(j>5000) {
                k-=j-5000;
                j = 5000;

            }
            for(;k>0; k--) {
                d[i+j]++;
                j--;
                if(j==0) {
                    d[i+1]+=k-1;
                    break;
                }
            }
        }
        if(a[i]-d[i]>1) {
            for(int j = 2; j<=a[i]-d[i]  and i+j<5005; j++)
                d[i+j]++;
            ans+=a[i]-d[i]-1;
            d[i] = a[i]-1;
        }
    }
    pr(ans);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve2();
}

