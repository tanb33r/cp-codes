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
bool isgd(string x) {
    int n = x.size();
    f(i,n/2)
    if(x[i] == x[n-i-1])
        return 0 ;
    return 1;
}

void solve() {
    ll n,m;
    string s, t;
    cin>>n>>s;

    vector<int> ans;
    int i = 0 ;
    int j =  int(s.size())-1 ;
    int z = count(all(s),'0');
    int o = count(all(s),'1');
    if(s.size()%2==1 or o!=z) {
        ps(-1);
        return;
    }

    if(isgd(s)) {
        ps(0);
        return;
    }
    while(i<j) {

        if(s[i]!=s[j]) {
            i++,j--;
            continue;
        }

        if(s[i]=='1') {

            s.insert(i,"01");
            ans.pb(i);
            j+=2;
        }

        else if(s[i]=='0') {
            s.insert(j+1,"01");
            ans.pb(j+1);
            j+=2;
        }


    }

    pr(ans.size());
    vout(ans);

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
//1 0 100011
