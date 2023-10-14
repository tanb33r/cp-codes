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
#define debb(...)          cout << "\t[" << #__VA_ARGS__ << "]:\t", dbg_out(__VA_ARGS__)
//#define  cerr               if(0)cerr
using namespace std;
void dbg_out() {
    cout << endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cout << ' ' << H;
    dbg_out(T...);
}
const int mod = 1e9+7;
const int N = 1e5+7;
double dist(double ax,double ay,double bx,double by) {

    double dis = ((ax-bx)*(ax-bx))+((ay-by)*(ay-by));
    return sqrt(dis);
}
void solve() {
    double px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
//    double dis = dist(ax,ay,bx,by);
    double pdisa = dist(ax,ay,px,py);
    double pdisb = dist(px,py,bx,by);
    double disab = dist(ax,ay,bx,by);
    double disa0 = dist(0,0,ax,ay);
    double disb0 = dist(0,0,bx,by);
    double A = max(disa0,pdisa);
    double B = max(disb0,pdisb);
    double ans = min(A,B); // probable ans; with one light
    double ans2 = 1e10;

    cout << fixed << setprecision(10) ;
    if(disa0 <= disab/2 and pdisb <= disab/2)
        ans2 = disab/2;
    if(disb0 <= disab/2 and pdisa <= disab/2)
        ans2 = disab/2;

    double apb0 = max({disab/2,disb0,pdisa});
    double a0bp = max({disab/2,disa0,pdisb});
    double ans3 = min(apb0,a0bp);

    ans = min({ans,ans2,ans3});
    cout<< ans<<'\n';

}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t=1;
    cin>>t;
    while(t--)
        solve();
}
