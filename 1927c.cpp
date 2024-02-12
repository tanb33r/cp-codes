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
    ll n,m,k;
    cin>>n>>m>>k;
    int a[n];
    int b[m];
    ll ans=0;

//    map<int,vector<int>> mm;
    map<int,set<int>> ma;
    f(i,n) {
        cin>>a[i];
        if(a[i]<=k) ma[a[i]].insert(1);
    }
    f(i,m) {
        cin>>b[i];
        if(b[i]<=k) ma[b[i]].insert(2);
    }
    int c1 = 0 ;
    int c2 = 0 ;
    int c3 = 0 ;
    ff(i,1,k+1) {
        if(ma[i].size()==1) {
            auto it = ma[i].begin();
            c1+=(*it == 1);
            c2+=(*it == 2);
        } else if(ma[i].size()==2) {
            c3++;
        }
    }
    bool ok = 0;
    if((c3+c1)<k/2) {
        ps(NO);
        return;
    } else if(c1<k/2) {
        if(c3>= k/2- c1)
            c3 -= k/2- c1,c1 = k/2;
    }
    if((c3+c2)<k/2) {
        ps(NO);
        return;
    } else if(c2<k/2) {
        if(c3>= k/2- c2)
            c3 -= k/2- c2,c2 = k/2;
    }

    hmm((c1+c2)>=k/2)
//    ps(YES);

//    int lagbe1 = max(0ll,c3-(k/2-c1));
//    int lagbe2 = max(0ll,c3-(k/2-c2));
//    int lagbe2;
//    ok |= (c1+(c3 >= k/2 and c2>= k/2);
//    ok |= (c1 >= k/2 and c2+c3>= k/2);
//    ok |= c1+lagbe1 >=k/2 and c2+lagbe2 >=k/2;
//    hmm(ok);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
