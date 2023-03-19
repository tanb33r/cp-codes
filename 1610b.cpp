#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb                 push_back
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  int                long long
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;

void solve() {
    int n;
    cin>>n;
    int v[n];
    f(i,n) {
        v[i]=II;
    }
    if(n<=2) {
        return void(ps(YES));
    }
    int i = 0,j=n-1;
    while(v[i]==v[j]) {
        i++;
        j--;
        if(i>=j) {
            return void(ps(YES));
        }
    }
    int i2= i;
    int j2= j;
    int l = v[i];

    while(i2<n) {
        if(i2>=j2) return void(ps(YES));
        if(v[i2]==l)i2++;
        else if(v[j2]==l)j2--;
        else if(v[i2]==v[j2]) i2++,j2--;
        else  break;

    }

    i2= i;
    j2= j;
    l = v[j];

    while(j2>-1) {
        if(i2>=j2) return void(ps(YES));
        if(v[i2]==l)i2++;
        else if(v[j2]==l)j2--;
        else if(v[i2]==v[j2]) i2++,j2--;
        else break;
    }

    ps(NO);

}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}


