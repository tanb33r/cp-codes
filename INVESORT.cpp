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

string s,t;
void solve() {

    queue<string> q;
    unordered_set<string> se;
    int ans = 0;
    q.push(s);
    se.insert(s);

    while(!q.empty()) {
        int n = q.size();
        while(n--) {
            string x = q.front();
            q.pop();

            f(i,10) {
                ff(j,i+1,10) {
                    string k = x;
                    reverse(k.begin()+i,k.begin()+j);
                    if(k==t) {
                        pr(ans+1);
                        return;
//                        return;
                    }
                    if(se.find(k) == se.end()) {
                        se.insert(k);
                        q.push(k);
                    }
                }
            }
        }
        debb(ans);
        ans++;
    }

    pr(-1);
}
int main() {
//    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
//    cin>>t;
    while(1) {
        cin>>s>>t;
        if(s=="*")
            break;
        solve();
    }
}
