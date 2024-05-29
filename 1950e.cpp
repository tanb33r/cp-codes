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

string s;
int c = 0;
int ans = 0;
queue<string> q;
map<int,int> mis;

void can_half(string x) {
    int sz = x.size();
//    if(sz==1)
//        return;

    if(sz&1){
//        if(a!=b)
//            mis[1]++;
//        ans = 1;
        return;
    }


    string a = x.substr(0, sz/2);
    string b = x.substr(sz/2);
    f(i,a.size()) {
        if(a[i]!=b[i])c++;
        if(c>1) return;
    }

    if(c==1) {
        ans = sz/2;
        mis[ans]++;
    }

    c=0;
//    q.push(a);
//    q.push(b);
    can_half(a);
    can_half(b);
}

void init() {
// q.clear();
    while(!q.empty()) q.pop();
    mis.clear();
    c = 0;
    ans = 0;
}

void solve() {
    init();
    ll n;
    cin>>n>>s;
    ans = s.size();
    q.push(s);
//    can_half(s);
    while(!q.empty()) {
        string ss = q.front();
        can_half(ss);
        q.pop();
    }

    for(auto x:mis) {
        if(x.S<=1)  {
            pr(x.F);
            return;
        }
    }
    pr(n);
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
}
