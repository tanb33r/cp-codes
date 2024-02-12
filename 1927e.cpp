#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define ps(x)              cout<<#x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define newl               cout<<"\n"
#define all(v)             (v).begin(), (v).end()
#define rall(v)            (v).rbegin(), (v).rend()
#define vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define arrp(v,n)          for(int I=0;I<n;I++)cout<<v[I]<<" ";cout<<"\n"
#define F                  first
#define S                  second
#define deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define ll                 long long
#define pii                pair<int,int>
#define sz(x)              ((int)x.size())
#define II                 ({ll t;cin>>t;t;})
#define cbit(n,p)          ((n)&(1LL<<(p)))
#define sbit(n,p)          ((n)|(1LL<<(p)))
#define tbit(n,p)          ((n)^(1LL<<(p)))
#define debb(...)          cerr << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cerr << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;

void solve() {
    ll n,k;
    cin>>n>>k;
    int a[n];
    vector<int> z;
    ll ans=0;

    int j = 1;
    int l = n;
    int kk = k/2;
    int xx = n/k;

    int baki = n - xx*k;
//if()l--;
    l-=xx;
    j+=xx;
//            if (flag) l++;
//            else j--;
//            flag = !flag;
    bool flag = 0;
    while(kk--) {
//        z.pb(j);
//        if(baki-- > 0) z.pb(l-1);
//        else
            z.pb(l);
//        if(baki-- > 0) z.pb(j+1);
//        else
        z.pb(j);


        j-=xx;
        l+=xx;
    }
    int i = 0;
    int inc = -1;
    while(z.size()<n) {
        int x;
//        if(inc)
        x = z[i]+inc;
        z.pb(x);
        inc*=-1;5
2 2
3 2
10 4
13 4
7 4

        i++;
    }
    vout(z);
}

int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
