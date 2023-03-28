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
#define  AO(a)              ({int n=sizeof(a)/sizeof(a[0]); f(I,n){cout<<(I?" ":"")<<a[I];} cout<<'\n'; })
#define  F                  first
#define  S                  second
#define  ps(x)              cout<<#x<<"\n"
#define  pr(x)              cout<<x<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<x<<"\n"
#define  hmm(x)             cout<<((x)?"YES":"NO")<<"\n";
#define  ll                 long long
#define  II                 ({ll t;cin>>t;t;})
#define  cbit(n,p)          ((n)&(1LL<<(p)))
#define  sbit(n,p)          ((n)|(1LL<<(p)))
#define  tbit(n,p)          ((n)^(1LL<<(p)))
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

typedef pair<int,int> pii;
const int MAX = 2e5+5;
int DIRECTION(string s) {
    if(s=="DR") return 1;
    if(s=="DL") return 2;
    if(s=="UR") return 3;
    return 4;
}

int movx[] = {0,1,-1,1,-1};
int movy[] = {0,1,1,-1,-1};

ll n,m,x1,y1,x2,y2;
string s;
bool valid(int x,int y, int dir) {
    x+=movx[dir];
    y+=movy[dir];
    debb(x,y);
    return (x>0 and x<=n and y>0 and y<=m);
}
map<pii,int> mem;

void mov(int dir) {
    if(mem[{x1,y1}]==0)
        mem[ {x1,y1}] = dir;
    x1+=movx[dir];
    y1+=movy[dir];
}

void cle() {
    mem.clear();
}

void bounce(int x,int y, int dir) {
    x+=movx[dir];
    y+=movy[dir];
//    debb(y);
    if(x<1) {
        if(s=="DL") s="DR";
        if(s=="UL") s="UR";
    }
    if(x>n) {
        if(s=="DR") s="DL";
        if(s=="UR") s="UL";
    }
    if(y>m) {
        if(s=="DL") s="UL";
        if(s=="DR") s="UR";
    }
    if(y<1) {
        if(s=="UR") s="DR";
        if(s=="UL") s="DL";
    }
}

void solve() {
    cle();
    //dr dl ur ul
    //1 2   3  4
    cin>>m>>n>>y1>>x1>>y2>>x2>>s;
//    mem[ {x1,y1}] = DIRECTION(s);
//    n--,m--;
    int cnt = 0;
    while(1) {
        if(x1==x2 and y1==y2)
            break;
        debb(x1,y1);

        if(valid(x1,y1,DIRECTION(s))) {
//            ps(valid);
            if(mem[ {x1,y1}]!=0 and mem[ {x1,y1}]==DIRECTION(s)) {
                pr(-1);
                return;
            }
//            ps(valid);
            mov(DIRECTION(s));
        } else {
            bounce(x1,y1,DIRECTION(s));
            cnt++;
//            ps(bounde);
            debb(s);
        }
    }

    pr(cnt);
}
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
