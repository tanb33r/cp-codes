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
int bruh(int k) {
    int n = 1;
    while(k/=10) {
        n*=10;
        n++;
//        deb(k);
    }
    return n;
}
void solve() {
    int n ;
    cin>>n;
    int values[] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};


    int ans = 0;
    int i = 0;
    if(n<10) {

        pr(n);
        return;
    }
    while(values[i]<n) {
        i++;
        ans+=9;
    }
    int k = values[i]-1;

//        deb(k);
//        deb(ans);
    while(k>n) {
        ans--;
//        deb(bruh(k));
        k-=bruh(k);
    }
    pr(ans);
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
