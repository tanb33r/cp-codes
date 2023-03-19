#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<n;++i)
#define  fr(i,j,n)          for(int i=int(n);i>=j;--i)
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
//#define  cerr               if(0)cerr
const int mod = 1e9+7;
using namespace std;
typedef pair<int,int> pii;
vector<ll> a(20),a2(20);

void r(int n) {
    int x = __lg(n)+1;
    ff(i,1,x) a[i]+=(1<<x)/2;
    a[x+1] += n-(1<<x)+1;
}

void r3(int n){
     while(n) {
            r(n);
            int x = __lg(n);
            n^=(1<<(x));
        }
}
void r2(int n){
    for(int i=0,k=1;i<16;i++,k++){
        a2[k]=((n/(1<<k))*(1<<(k-1)))+max((n%(1<<k))-(1<<(k-1))+1,0);
    }
}

void solve() {
    for(int i=0;i<1<<16;i++){
        a.clear();
        a2.clear();
        r3(i);
        r2(i);
//        if(a!=a2)
//            cout<<"NO"<<endl;
//        else
//            cout<<"YES"<<endl;
    }
//    cout<<"YES"<<endl;

}

signed main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    while(t--)
        solve();
}
