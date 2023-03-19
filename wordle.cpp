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
//#define  cerr               if(0)cerr
using namespace std;
typedef pair<int,int> pii;
const int MOD= 1e9+7;
ll addM(ll a,ll b) {
    return (a+=b)>=MOD?(a-=MOD):a;
}
ll subM(ll a,ll b) {
    return (a-=b)<0?(a+=MOD):a;
}

void solve() {
//    char c[]= {'a','c','y','n','t','i','g','b'};
//    size_t l = sizeof(c) / sizeof(c[0]);
    ifstream iFile("input.in.c");
    freopen("outputf.in","w",stdout);
    while (!iFile.eof()) {
        string x;
        iFile >> x;
        int b = 1;
        f(i,x.size())
        if(x[i]==',')cout<<"\n";
        else
            cout<<x[i];
//            f(j,l) {
//                if(x[i]==c[j])
//                    b=0;
//            }
//        }
//            if(b)
//                cout<<x<<"\n";
    }



}

int main() {


    solve();
}


