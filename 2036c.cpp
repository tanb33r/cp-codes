#include <bits/stdc++.h>
#define f(i,n)             for(int i=0; i<(n); i++)
#define ff(i,j,n)          for(int i=int(j);i<n;++i)
#define fr(i,n,j)          for(int i=int(n);i>=j;--i)
#define pb                 push_back
#define eb                 emplace_back
#define pr(x)              cout<<x<<"\n"
#define vps(x)             return void(cout<<#x<<"\n")
#define ps(x)              if(0) cout<<#x<<"\n"
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
#define  cerr               if(0)cerr
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
    ll q ;
    string s;
    cin>>s>>q;
    s = '#' + s;
    int cnt = 0;
    int n = s.size();
    f(i,n-3) {
        if(
            s[i]=='1' and
            s[i+1]=='1' and
            s[i+2]=='0' and
            s[i+3]=='0' )
            cnt++;
    }


    debb(s,cnt);
    f(i,q) {
        ll x;
        char y;
        cin>>x>>y;
        if(s[x] == y) {
            hmm(cnt>0);
            continue;
        }


        if(y == '1') {
            if(x>=4 and
                    s[x]=='0' and
                    s[x-1]=='0' and
                    s[x-2]=='1' and
                    s[x-3]=='1' ) {

                ps(1st);
                cnt--;
            } else if(x+1<n and x>=3 and
                      s[x+1]=='0' and
                      s[x]=='0' and
                      s[x-1]=='1' and
                      s[x-2]=='1' ) {
//                ps(2nd);
                cnt--;
            }

        } else {
            if(x+3<n and
                    s[x]=='1' and
                    s[x+1]=='1' and
                    s[x+2]=='0' and
                    s[x+3]=='0' ) {
                ps(3rdd);
                cnt--;
            } else if(x+2<n and x>1 and
                      s[x-1]=='1' and
                      s[x]=='1' and
                      s[x+1]=='0' and
                      s[x+2]=='0' ) {
                ps(4rddd);
                cnt--;
            }
        }

        s[x] = y;

        if(y == '0') {
            if(x>=4 and
                    s[x]=='0' and
                    s[x-1]=='0' and
                    s[x-2]=='1' and
                    s[x-3]=='1' )
                cnt++;
            else if(x+1<n and x>=3 and
                    s[x+1]=='0' and
                    s[x]=='0' and
                    s[x-1]=='1' and
                    s[x-2]=='1' )
                cnt++;

        } else {
            if(x+3<n and
                    s[x]=='1' and
                    s[x+1]=='1' and
                    s[x+2]=='0' and
                    s[x+3]=='0' )
                cnt++;
            else if(x+2<n and x>1 and
                    s[x-1]=='1' and
                    s[x]=='1' and
                    s[x+1]=='0' and
                    s[x+2]=='0' )
                cnt++;
        }
        debb(s, cnt);
        hmm(cnt>0);

    }

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
