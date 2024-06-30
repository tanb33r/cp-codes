#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              cout<<#x<<"\n"
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
const int n = 7 ;
string s[n];

int p[n][n] {};



int mi,mj;
int c = 0 ;

void mark(int i, int j) {
    p[i][j]++;
    p[i+1][j+1]++;
    p[i-1][j+1]++;
    p[i+1][j-1]++;
    p[i-1][j-1]++;

}
bool isbl(int i, int j) {

    if(s[i][j] == 'B' and
            s[i+1][j+1] == 'B' and
            s[i-1][j+1] == 'B' and
            s[i+1][j-1] == 'B' and
            s[i-1][j-1] == 'B') return 1;
    else return 0;
}


void init() {
    f(i,n)
    f(j,n)
    p[i][j]=0;
}
void check() {
    c = 0 ;
    ff(i,1,n-1) {
        ff(j,1,n-1) {
            if(isbl(i,j)) {
                c++;
                mark(i,j);
            }
        }
    }
}
void print() {

    cout<<"$$$$$$$$$$$$$$"<<'\n';
    f(i,n)
    pr(s[i]);
    cout<<"$$$$$$$$$$$$$$"<<'\n';
}
void findmax() {
    int m = 0 ;
    f(i,n)
    f(j,n)
    if(m< p[i][j]) {
        m = p[i][j];
        mi=i;
        mj=j;
    }
}

void solve() {
    f(i,n) {
        cin>>s[i];
    }
    int ans =0 ;
    check();
    while(c!=0) {
        init();
        check();

        if(c) {
            findmax();
            s[mi][mj] = 'W';
            ans++;
        }
        print();
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
