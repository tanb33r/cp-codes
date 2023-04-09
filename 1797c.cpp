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
#define  pr(x)              cout<<x<<"\n"
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
void ask(int x,int y) {
    cout<<"? "<<x<<' '<<y<<endl;
}
int distance(int x1, int y1, int x2, int y2) {
    return max(abs(x1 - x2), abs(y1 - y2));
}
void solve() {
    ll n,m,d1,d2,d3;
    cin>>n>>m;
    ask(1,1);
    cin>>d1;
    ask(n,m);
    cin>>d2;
    if(m-d1<=0) {
        int y, row = d1+1;
        ask(row,1);
        cin>>y;
        cout<<"! "<<row<<' '<<y+1<<endl;
    } else if(n-d1<=0) {
        int y, col = d1+1;
        ask(1,col);
        cin>>y;
        cout<<"! "<<y+1<<' '<<col<<endl;
    } else if(m-d2<=0) {
        int y, row = n-d2;
        ask(row,1);
        cin>>y;
        cout<<"! "<<row<<' '<<y+1<<endl;
    } else if(n-d2<=0) {
        int y, col = m-d2;
        ask(1,col);
        cin>>y;
        cout<<"! "<<y+1<<' '<<col<<endl;
    }

    else {
        pii p1 = {d1+1,m-d2};
        pii p2 = {n-d2,d1+1};
        if (n-d2 == d1+1) {
            int y, row = n-d2;
            ask(row,1);
            cin>>y;
            cout<<"! "<<row<<' '<<y+1<<endl;
        }
        else if(m-d2 == d1+1) {
            int y, col = m-d2;
            ask(1,col);
            cin>>y;
            cout<<"! "<<y+1<<' '<<col<<endl;
        } else {
            ask(n,1);
            cin>>d3;
            int dist = max(abs(n-(d1+1)),abs(1-(m-d2)));
            int dist2 = max(abs(n-(n-d2)),abs(1-(d1+1)));
            if(dist == d3) {
                cout<<"! "<<d1+1<<' '<<m-d2<<endl;
            } else if(dist2 == d3) {
                cout<<"! "<<n-d2<<' '<<d1+1<<endl;
            }
        }
    }
    // 1 8 4 4 3 3

}
int main() {
//    cin.tie(nullptr)->sync_with_stdio(false);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
