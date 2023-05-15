#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=a-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  AI(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n)a[I]=II; })
#define  AO(a,n)            for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  vpr(x)             return void(pr(x))
#define  pr(x)              cout<<x<<"\n"
#define  vps(x)             return void(cout<<#x<<"\n")

#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
#define  debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr

using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}

ll sum(ll n) {
//        long long sum =0;
    return (n*(n+1))/2;
}
void solve() {
 vpr(3);
 vpr(3);
 vpr(3);
 int n =3;
    vector<int> v;
    for(int i=1; i<=n; i++) {
        v.pb(i);
    }
    vout(v);
    ll s = 0;
    for(int k = 2; k<n; k++) {

        f(x,k)
        s+=v[x];
        debb(s);
        if(s%k==0)
            vout(v);
        int x = 0;
        while(x+k<n) {

            if(s%k==0)
                vout(v);


            s-=v[x];
            s+=v[x+k];
            x++;
        }
    }


}


int main() {
    vector<int> v = {1,2,3};
//    vpr("asd");
   solve();

//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int t=1;
    //cin>>t;
//    int i ;
//    cin>>i;
//    for(int i=1; i<=100; i++) {
//    solve(i);
//    }
    return 0;
}
