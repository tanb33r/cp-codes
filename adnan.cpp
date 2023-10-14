#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  fr(i,n)            for(int i=int(n);~i;--i)
#define  ps(x)              cout<<#x<<"\n"
#define  pb(x)              push_back(x)
#define  eb(x)              emplace_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ ll TEMP; cin>>TEMP; TEMP; })
//#define  cerr               if(0)cerr
using namespace std;
int main() {

    int n=5 ;
//    cin>>n;
    int a[n]={2,5,7,9,11};
//    f(i,n) cin>>a[i];
    int check[100000] {0};

    f(i,n) {
        for(int j = 2; j<sqrt(a[i]); j++) {
            if(a[i]%j==0)check[j]++;
        }
    }
    for(int i = 2; i<100000; i++) {
        if(check[i]>1) {
            ps(no);
            return 0 ;
        }

    }  ps(yes);
}
