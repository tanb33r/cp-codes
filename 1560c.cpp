
#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
bool per(int n) {
    int k  = sqrt(n);
    return k*k==n;

}
void solve2() {
    int n,ans=0;
    cin>>n;
    if(n==1) {
        pr(1<<" "<<1);
        return;
    }
    if(per(n)) {
        pr(sqrt(n)<<" "<<1);
        return;
    }
    int k = sqrt(n);
   asd
}

void solve() {
    int n,ans=0;
    cin>>n;
    if(n==1) {
        pr(1<<" "<<1);
        return;
    }
    if(per(n)) {
        pr(sqrt(n)<<" "<<1);
        return;
    }
    int k = sqrt(n);
    int ag = k+1;
    int dif  =  ag*ag - k*k;
    int med = (k*k+1 +ag*ag)/2;
    int col = ag;
    int row = ag;
    if(n>med) row-=abs(n-med);
    if(n<med) col-=abs(n-med);
    pr(col<<" "<<row);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve2();
}
