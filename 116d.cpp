#include <bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,a,n)          for(int i=a;i<n;i++)
#define  fr(i,a,n)          for(int i=int(a)-1;i>=n;i--)
#define  pb                 push_back
#define  eb                 emplace_back
#define  all(v)             (v).begin(), (v).end()
#define  rall(v)            (v).rbegin(), (v).rend()
#define  vout(v)            f(I,(v).size())cout<<v[I]<<" ";cout<<"\n"
#define  AI(a,n)            f(I,n)a[I]=II;
#define  AO(a,n)            f(I,n)cout<<a[I]<<" ";cout<<"\n"
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  vpr(x)             return void(pr(x))
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

typedef pair<int,int> pii;
const int MAX = 2e5+5;
ll n,m,W;

vector<string> s;
int mem[155][155];
void init() {
    f(i,155) f(j,155) mem[i][j]=0;
}
//ll dp(int i=0, int j=0, int mov=0, int w=0, int dir=1) {
//    if(i<0 or i>=n or j<0 or j>=m)
//        return MAX;
//    w+=s[i][j]=='W';
//    if(w==W) return mov;
//    ll ans = MAX;
//    if(i==0) {
//        return dp(i+1,j,mov+1, w,dir*-1);
//    }
//    if(i==n-1) {
//        return dp(i+1,j,mov+1, w,dir*-1);
//    }
//    ans = min
//}


void solve() {
    init();
    cin>>n>>m;
    s.clear();
    s.resize(n+1);
    W=0;
    ll ans = 0;
    bool r[n+1][m];
    bool l[n+1][m];
    f(i,n) {
        cin>>s[i];
        W += count(all(s[i]),'W');
    }
    s[n] = string(m,'G');

    f(i,n) {
        bool w = 0;
        if(i&1)
            f(j,m) {
            w |= s[i][j]=='W' || s[i+1][j]=='W';
            l[i][j]=w;
            r[i][j]=0;
        } else
            fr(j,m,0) {
            w |= s[i][j]=='W' || s[i+1][j]=='W';
            r[i][j]=w;
            l[i][j]=0;
        }
    }


//    f(i,n) {
//        f(j,m) cout<<r[i][j];
//        pr("");
//    }
//    pr("");
//    f(i,n) {
//        f(j,m) cout<<l[i][j];
//        pr("");
//    }
//    pr("");


    int mov = 0;
    int j = 0;
    int w = 0;
    f(i,n) {
        while(1) {
            w+=s[i][j]=='W';
            if(w==W) vpr(mov);

            int dir = (i&1)? -1:1;
            mov++;
            if((j==0 and dir==-1) or (dir==1 and j==m-1))
                break;

            if(i&1)
                if(l[i][j+dir]) j+=dir;
                else break;
            else if(r[i][j+dir]) j+=dir;
            else break;

        }
    }
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
}
